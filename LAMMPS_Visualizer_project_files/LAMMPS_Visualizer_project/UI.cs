using System;
using System.IO;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;
using System.Globalization;

public class UI : MonoBehaviour
{
    // UI related declaration
    private VisualElement root, slice_Container, analysis_Container;
    private bool slice_isVisible = false, root_isVisible = true, resource_isVisible = false;
    private Label timestep_Label, presenting_Label, fps_Label;
    private Slider x_position,y_position, z_position, x_width, y_width, z_width;
    private ScrollView figures_ScrollView, proteins_ScrollView, resource_ScrollView;
    private ArrayList proteins_Toggles = new ArrayList();
    private GameObject slicingCube;

    // UI initalization
    private void OnEnable()
    {
        root = GetComponent<UIDocument>().rootVisualElement;
        analysis_Container = root.Q<VisualElement>("Analysis_Container");
        figures_ScrollView = analysis_Container.Q<ScrollView>("Figures");
        proteins_ScrollView = root.Q<ScrollView>("Proteins");
        resource_ScrollView = root.Q<ScrollView>("Resource_ScrollView");

        Button bond_Button = root.Q<Button>("Bond");
        bond_Button.clicked += () => bond();
        Button escape_Button = root.Q<Button>("Escape");
        escape_Button.clicked += () => escape();
        Button analysis_Button = root.Q<Button>("Analysis");
        analysis_Button.clicked += () => bond_analysis(bonds);
        Button forward_Button = root.Q<Button>("Forward");
        forward_Button.clicked += () => forward();
        Button backward_Button = root.Q<Button>("Backward");
        backward_Button.clicked += () => backward();
        Button open_Resource_Button = root.Q<Button>("Open_Resource");
        open_Resource_Button.clicked += () => toggleResource();
        fps_Label = root.Q<Label>("Percentage");
        timestep_Label = root.Q<Label>("Timestep_Label");
        presenting_Label = root.Q<Label>("presenting_Label");

        slice_Container = root.Q<VisualElement>("Slice_Container");
        Button openslice_Button = root.Q<Button>("Slice_Open");
        openslice_Button.clicked += () => openSlice();
        Button slice_Button = slice_Container.Q<Button>("Slice");
        slice_Button.clicked += () => slice();
        x_position = slice_Container.Q<Slider>("X_Position");
        x_position.RegisterValueChangedCallback(evt => X_Position_Change(evt));
        x_width = slice_Container.Q<Slider>("X_Width");
        x_width.RegisterValueChangedCallback(X_Width_Change);
        y_position = slice_Container.Q<Slider>("Y_Position");
        y_position.RegisterValueChangedCallback(Y_Position_Change);
        y_width = slice_Container.Q<Slider>("Y_Width");
        y_width.RegisterValueChangedCallback(Y_Width_Change);
        z_position = slice_Container.Q<Slider>("Z_Position");
        z_position.RegisterValueChangedCallback(Z_Position_Change);
        z_width = slice_Container.Q<Slider>("Z_Width");
        z_width.RegisterValueChangedCallback(Z_Width_Change);
    }

    private Camera mainCamera = null;
    private GameObject mainCamera_Object = null;

    private string data;
    private string format;
    private string bonds_Path;

    private StreamReader dataReader = null;
    private StreamReader formatReader = null;
    private StreamReader bondsReader = null;

    private ArrayList figures = new ArrayList();
    private ArrayList geoData = new ArrayList();
    private ArrayList gameObjects = new ArrayList();
    private ArrayList proteins = new ArrayList();
    private ArrayList bonds = new ArrayList();
    private ArrayList import_Bonds = new ArrayList();
    
    private int NUMBER_OF_ATOMS;
    private int BOX_BOUND_X;
    private int BOX_BOUND_Y;
    private int BOX_BOUND_Z;
    private long timeStep;

    private int fastMode = 50;
    private float lerpFactor = .1f;
    private float deltaTime;

    private bool reachedEnd = false;
    private bool lerpMode = false;
    private bool isBond = false;
    private bool isVisible = true;
    private bool displayImportBonds = false;

    private Dictionary<GameObject, ArrayList> bindingPartners;
    private Dictionary<GameObject, int> bondFigures;

    // Start is called before the first frame update
    void Start()
    {
        mainCamera_Object = GameObject.Find("Main Camera");
        mainCamera = Camera.main;

        // creating directories
        if (!Directory.Exists(Application.dataPath + "/geodata") & !Directory.Exists(Application.dataPath + "/format") & !Directory.Exists(Application.dataPath + "/bonds")) {
            Directory.CreateDirectory(Application.dataPath + "/geodata");
            Directory.CreateDirectory(Application.dataPath + "/format");
            Directory.CreateDirectory(Application.dataPath + "/bonds");
            Console.WriteLine("Directories were created");
            Application.Quit();
        }

        // loading paths of these directories

        string[] formatDir = Directory.GetFiles(Application.dataPath + "/format");
        if (formatDir.Length > 0)
        {
            format = formatDir[0];
            initFormat();
            Label format_Label = new Label();
            format_Label.text = "Format";
            resource_ScrollView.Add(format_Label);
            foreach (string s in formatDir)
            {
                Button button = new Button();
                button.text = s;
                button.clicked += () =>
                {
                    format = s;
                    proteins = new ArrayList();
                    proteins_Toggles = new ArrayList();
                    proteins_ScrollView.Clear();
                    initFormat();
                    foreach (GameObject gameObject in gameObjects) Destroy(gameObject);
                    gameObjects = new ArrayList();
                    initData();
                };
                resource_ScrollView.Add(button);
            }
        }
        else
        {
            Console.WriteLine("No format available in " + Application.dataPath + "/format");
        }
        string[] dataDir = Directory.GetFiles(Application.dataPath + "/geodata");
        if (dataDir.Length > 0)
        {
            data = dataDir[0];
            initData();
            Label data_Label = new Label();
            data_Label.text = "Data";
            resource_ScrollView.Add(data_Label);  
            foreach (string s in dataDir)
            {
                Button button = new Button();
                button.text = s;
                button.clicked += () =>
                {
                    data = s;
                    foreach(GameObject gameObject in gameObjects) Destroy(gameObject);
                    gameObjects = new ArrayList();
                    initData();
                };
                resource_ScrollView.Add(button);
            }
        }
        else
        {
            Console.WriteLine("No data available in " + Application.dataPath + "/geodata");
        }
        string[] bondsDir = Directory.GetFiles(Application.dataPath + "/bonds");
        if (bondsDir.Length > 0)
        {
            bonds_Path = bondsDir[0]; 
            Label bonds_Label = new Label();
            bonds_Label.text = "Bonds";
            resource_ScrollView.Add(bonds_Label);
            foreach (string s in bondsDir)
            {
                Button button = new Button();
                button.text = s;
                button.clicked += () => { bonds_Path = s; };
                resource_ScrollView.Add(button);
            }
        }
        else
        {
            Console.WriteLine("No bonds available in " + Application.dataPath + "/bonds");
        }
    }

    private void initFormat()
    {
        try
        {
            formatReader = new StreamReader(format);
            while (!formatReader.EndOfStream)
            {
                string line = formatReader.ReadLine();
                if (line.StartsWith("//")) continue; // for comments
                line = line.Replace(" ", ""); // white space elimination
                string[] protein_Attributes = line.Split("|");
                Color hexColor = ColorUtility.TryParseHtmlString(protein_Attributes[2], out Color resultColor) ? resultColor : Color.white;
                Protein protein = new Protein(protein_Attributes[0], float.Parse(protein_Attributes[1], CultureInfo.InvariantCulture.NumberFormat), hexColor);
                for (int i = 3; i < protein_Attributes.Length; i++)
                {
                    // bindingattributes 0 => partner ; 1 => distance
                    string[] bindingattributes = protein_Attributes[i].Split(";");
                    protein.bindingdistance[bindingattributes[0]] = float.Parse(bindingattributes[1], CultureInfo.InvariantCulture.NumberFormat);
                }
                Toggle toggle = new Toggle();
                toggle.text = protein.name;
                toggle.style.color = protein.hexColor;
                toggle.RegisterValueChangedCallback(evt => OnToggleValueChanged(evt, toggle.value, protein.name));
                toggle.value = true;
                proteins_ScrollView.Add(toggle);
                proteins_Toggles.Add(toggle);
                proteins.Add(protein);
            }
        }
        catch (Exception ex)
        {
            Console.Error.WriteLine("no format");
        }
    }
    private void initData()
    {
        try
        {
            dataReader = new StreamReader(data);
            dataReader.ReadLine(); // ITEM:TIMESTEP
            timeStep = long.Parse(dataReader.ReadLine());
            timestep_Label.text = "Timestep : " + timeStep.ToString();
            dataReader.ReadLine(); //ITEM: NUMBER OF ATOMS
            NUMBER_OF_ATOMS = int.Parse(dataReader.ReadLine());
            dataReader.ReadLine(); //ITEM: BOX BOUNDS"  
            BOX_BOUND_X = int.Parse(dataReader.ReadLine().Split(" ")[1]);
            BOX_BOUND_Y = int.Parse(dataReader.ReadLine().Split(" ")[1]);
            BOX_BOUND_Z = int.Parse(dataReader.ReadLine().Split(" ")[1]);
            dataReader.ReadLine(); //ITEM: ATOMS id type xs ys zs

            for (int i = 0; i < NUMBER_OF_ATOMS; i++)
            {
                string[] substrings = dataReader.ReadLine().Split(" ");
                GameObject gameObject = GameObject.CreatePrimitive(PrimitiveType.Sphere);
                gameObject.transform.position = new Vector3(
                    float.Parse(substrings[2], CultureInfo.InvariantCulture.NumberFormat) * BOX_BOUND_X, 
                    float.Parse(substrings[3], CultureInfo.InvariantCulture.NumberFormat) * BOX_BOUND_Y, 
                    float.Parse(substrings[4], CultureInfo.InvariantCulture.NumberFormat) * BOX_BOUND_Z);
                if (proteins.Count > 0)
                {
                    Protein protein = (Protein)proteins[int.Parse(substrings[1]) - 1]; // in Lammpstrij file it starts with 1
                    gameObject.name = protein.name;
                    gameObject.transform.localScale = new Vector3(protein.radius, protein.radius, protein.radius);
                    Renderer rend = gameObject.GetComponent<Renderer>();
                    rend.material.color = protein.hexColor;
                }
                gameObjects.Add(gameObject);
            }
        }
        catch (Exception ex)
        {
            Console.Error.WriteLine("no Lammps format");
        }
    }

    // Update is called once per frame
    void Update()
    {
        // hotkey bindings 
        if (Input.GetKeyDown(KeyCode.V)) toggleGui();
        if (Input.GetKeyDown(KeyCode.Escape)) escape();
        if (Input.GetKeyDown(KeyCode.Q)) backward();
        if (Input.GetKeyDown(KeyCode.Y)) toggleVisibility();
        if (Input.GetKeyDown(KeyCode.R)) toggleBond();
        if (Input.GetKeyDown(KeyCode.T)) bond_analysis(bonds);
        if (Input.GetKeyDown(KeyCode.Z)) bond_analysis(import_Bonds);
        if (Input.GetKeyDown(KeyCode.X)) toggleLerpMode();
        if (Input.GetKeyDown(KeyCode.G)) toggleImportBonds();

        // clicking behaviour on an object
        if (Input.GetMouseButtonDown(0))
        {
            Ray ray = mainCamera.ScreenPointToRay(Input.mousePosition);
            RaycastHit hit;
            if (Physics.Raycast(ray, out hit))
            {
                GameObject clickedObject = hit.collider.gameObject;

                // if bond_analysis was executed, it can present the total number of bonds in a figure
                if (clickedObject.name.Equals("Bond"))
                {
                    if (bondFigures != null)
                    {
                        foreach (Bond bond in bonds)
                        {
                            if (ReferenceEquals(bond.bond, clickedObject))
                            {
                                
                                    if (bondFigures.ContainsKey(bond.gameObject))
                                    {
                                        ArrayList figure = (ArrayList)figures[bondFigures[bond.gameObject]];
                                        presenting_Label.text = figure.Count.ToString();
                                    }
                                    else if (bondFigures.ContainsKey(bond.gameObject2))
                                    {
                                        ArrayList figure = (ArrayList)figures[bondFigures[bond.gameObject2]];
                                        presenting_Label.text = figure.Count.ToString();
                                    }
                                
                           
                            }
                        }
                    }
                }
                else
                {
                     // present the protein name of the clicked object
                     foreach(Protein protein in proteins) if(protein.name.Equals(clickedObject.name)) presenting_Label.text = protein.name;  
                }
            }
        }
        // reload data hotkey 
        if (Input.GetKeyDown(KeyCode.C))
        {
            reachedEnd = false;
            loadNew();
        }
        // if data reached the end the movement in time will be restricted
        if (!reachedEnd)
        {
            if (Input.GetKeyDown(KeyCode.E) | Input.GetKey(KeyCode.E)) forward();

            if (Input.GetKeyDown(KeyCode.F) | Input.GetKey(KeyCode.F))
            {
                try
                {
                    long step = fastMode * (NUMBER_OF_ATOMS + 9);
                    for (int i = 0; i < step; i++) dataReader.ReadLine();
                    geoData = loadTimeStep(false);
                    forward();
                }
                catch (Exception ex)
                {
                    loadNew();
                    Debug.Log(ex);
                }
            }
        }
        
        deltaTime += (Time.unscaledDeltaTime - deltaTime) * 0.1f;
        fps_Label.text = "FPS: " + Mathf.Round(1.0f / deltaTime);
    }

    // moves the position of all gameobjects forward in time
    private void forward()
    {
        geoData = loadTimeStep(false);
        timestep_Label.text = "Timestep : " + timeStep.ToString();
        if (lerpMode)
        {
            float current = Mathf.MoveTowards(0, 1, lerpFactor * Time.deltaTime);
            lerp(current);
        }
        else move();
        if (isBond) bond();
        if (displayImportBonds) loadImportBonds();
    }

    // moves backward by reinitializing the data and searching for the timestep before
    private void backward()
    {
        if (isBond) removeBonds();
        dataReader = new StreamReader(data);
        timeStep = timeStep - 5000;
        if (timeStep >= 0)
        {
            while (!dataReader.EndOfStream)
            {
                string line = dataReader.ReadLine();
                try {
                    if (timeStep == long.Parse(line))
                    {
                        timestep_Label.text = "Timestep : " + timeStep.ToString();
                        geoData = loadTimeStep(true);
                        if (lerpMode)
                        {
                            float current = Mathf.MoveTowards(1, 0, lerpFactor * Time.deltaTime);
                            lerp(current);
                        }
                        else move();
                        if (isBond) bond();
                        break;
                    }
                } catch (Exception e) { }
            }
        }
        else timestep_Label.text = "Timestep : 0";
    }

    // if bonds were made, they need to be destroyed to move in time again
    private void removeBonds()
    {
        foreach(Bond bond in bonds) Destroy(bond.bond);
        bonds = new ArrayList();
    }

    // gives each gameobject its new position by linear interpolating the way to it
    private void lerp(float current)
    {
        
        for (int i = 0; i < gameObjects.Count; i++)
        {
            GameObject gameObject = (GameObject)gameObjects[i];
            gameObject.transform.position = Vector3.Lerp((Vector3)gameObject.transform.position, (Vector3)geoData[i], current);
        }
        current = 0;

    }

    // gives each gameobject its new position
    private void move()
    {
        for (int i = 0; i < gameObjects.Count; i++)
        {
            GameObject gameObject = (GameObject)gameObjects[i];
            gameObject.transform.position = (Vector3)geoData[i];
        }
    }

    // deals with Lammps format and return the geo positions for the next timestep 
    private ArrayList loadTimeStep(bool backward)
    {
        ArrayList position = new ArrayList();
        try
        {
            if (!backward)
            {
                dataReader.ReadLine();
                timeStep = long.Parse(dataReader.ReadLine());
            }
            for (int j = 0; j < 7; j++) dataReader.ReadLine(); // format skipping
            for (int i = 0; i < NUMBER_OF_ATOMS; i++)
            {
                string[] substrings = dataReader.ReadLine().Split(" ");
                position.Add(new Vector3(
                    float.Parse(substrings[2], CultureInfo.InvariantCulture.NumberFormat) * BOX_BOUND_X, 
                    float.Parse(substrings[3], CultureInfo.InvariantCulture.NumberFormat) * BOX_BOUND_Y, 
                    float.Parse(substrings[4], CultureInfo.InvariantCulture.NumberFormat) * BOX_BOUND_Z));
            }
        }
        catch (Exception ex)
        {
            reachedEnd = true;
        }
        return position;
    }

    // reloads the data and directly ajust the position of each gameobject
    void loadNew()
    {
        dataReader = new StreamReader(data);
        ArrayList firstPosition = loadTimeStep(false);
        for (int i = 0; i < gameObjects.Count; i++)
        {
            GameObject gameObject = (GameObject) gameObjects[i];
            gameObject.transform.position = (Vector3) firstPosition[i];
        }
    }

    // creates bonds in a given distance threshold of a protein
    private void bond()
    {
        bindingPartners = new Dictionary<GameObject, ArrayList>();
        turnOnVisibility();
        removeBonds();
        for (int i = 0; i < gameObjects.Count; i++)
        {
            GameObject gameObject = (GameObject)gameObjects[i];
            foreach (Protein protein in proteins)
            {
                if (protein.name.Equals(gameObject.name))
                {
                    ArrayList partners = new ArrayList();
                    Collider[] colliders = Physics.OverlapSphere(gameObject.transform.position, protein.radius);
   
                        foreach (Collider collider in colliders)
                        {
                            GameObject nearby = collider.gameObject;
                        try
                        {
                            // if the bond was already build
                            if (bindingPartners.GetValueOrDefault(nearby).Contains(gameObject)) continue;

                            foreach (string name in protein.bindingdistance.Keys)
                            {
                                // it is a valid partner 
                                if (name.Equals(nearby.name))
                                {
                                    // creating the bond as a cylinder
                                    Bond bond_ = createBond(gameObject, nearby);
                                    bond_.bond.SetActive(false);
                                    bonds.Add(bond_);
                                    partners.Add(nearby);
                                    break;
                                }
                            }
                        }
                        catch (Exception e) { }
                    }
                    bindingPartners.Add(gameObject, partners);
                    break;
                }
            }
        }
        turnOffVisibility();
        foreach (Bond bond in bonds) bond.bond.SetActive(true);
        presenting_Label.text = bonds.Count.ToString();
    }

    private Bond createBond(GameObject gameObject, GameObject gameObject2)
    {
        Vector3 startPoint = gameObject.transform.position;
        Vector3 endPoint = gameObject2.transform.position;
        Vector3 midPoint = (startPoint + endPoint) / 2f;
        float length = Vector3.Distance(startPoint, endPoint);
        GameObject bond = GameObject.CreatePrimitive(PrimitiveType.Cylinder);
        bond.name = "Bond";
        bond.transform.localScale = new Vector3(.5f, length / 2f, .5f);
        bond.transform.position = midPoint;
        bond.transform.LookAt(endPoint);
        bond.transform.Rotate(new Vector3(90f, 0f, 0f));
        Bond bond_ = new Bond(bond, gameObject, gameObject2);
        return bond_;
    }

    // sorting the bonds by using a hashmap to know, where particapting gameobjects are
    private void bond_analysis(ArrayList bonds)
    {
        analysis_Container.style.display = DisplayStyle.Flex;
        figures_ScrollView.Clear();
        figures = new ArrayList();
        bondFigures = new Dictionary<GameObject, int>();
        
        foreach (Bond bond in bonds)
        {
            
            GameObject g1 = bond.gameObject;
            GameObject g2 = bond.gameObject2;
            bool in1 = bondFigures.ContainsKey(g1);
            bool in2 = bondFigures.ContainsKey(g2);
          
            if (!in1 & !in2)
            {
                // bond hasnt been seen yet
                ArrayList figure = new ArrayList();
                figure.Add(g1);
                figure.Add(g2);
                bondFigures.Add(g1, figures.Count);
                bondFigures.Add(g2, figures.Count);
                figures.Add(figure);
            }
            else if (in1 & in2)
            {
                int g1_index = bondFigures.GetValueOrDefault(g1);
                int g2_index = bondFigures.GetValueOrDefault(g2);
                if (g1_index != g2_index)
                {
                     // merging, because to lists share a bond
                    ArrayList g1_array = (ArrayList)figures[g1_index];
                    ArrayList g2_array = (ArrayList)figures[g2_index];
                    g1_array.Remove(g2);
                    g2_array.Remove(g1);
                    while (g2_array.Count != 0)
                    {
                        GameObject g = (GameObject) g2_array[0];
                        g1_array.Add(g);
                        g2_array.RemoveAt(0);
                        bondFigures.Remove(g);
                        bondFigures.Add(g, g1_index);
                    }
                    bondFigures.Remove(g2);
                    bondFigures.Add(g2, g1_index);

                }
            }
            else if (in1)
            {
                // advance a figure
                int g1_index = bondFigures.GetValueOrDefault(g1);
                ArrayList g1_array = (ArrayList)figures[g1_index];
                g1_array.Add(g2);
                bondFigures.Add(g2, g1_index);
            }
            else if (in2)
            {
                // advance a figure
                int g2_index = bondFigures.GetValueOrDefault(g2);
                ArrayList g2_array = (ArrayList)figures[g2_index];
                g2_array.Add(g1);
                bondFigures.Add(g1, g2_index);
            }
        }

        // creats the buttons for the scrollView 
        foreach (ArrayList figure in figures)
        {
            if (figure.Count == 0) continue;
            GameObject gameObject = (GameObject)figure[0];
            Button button = new Button();
            button.text = figure.Count.ToString();
            button.clicked += () => {
                mainCamera_Object.transform.position = gameObject.transform.position;
            };
            figures_ScrollView.Add(button);
        }
    }

    // builds the cube destined for slicing
    private void openSlice()
    {
        slice_isVisible = !slice_isVisible;
        if (slice_isVisible)
        {
            slice_Container.style.display = DisplayStyle.Flex;
            slicingCube = GameObject.CreatePrimitive(PrimitiveType.Cube);
            slicingCube.transform.position = new Vector3(BOX_BOUND_X / 2, BOX_BOUND_Y / 2, BOX_BOUND_Z / 2);
            slicingCube.transform.localScale = new Vector3(BOX_BOUND_X / 10, BOX_BOUND_Y, BOX_BOUND_Z);
        }
        else
        {
            slice_Container.style.display = DisplayStyle.None;
            Destroy(slicingCube);
        }
    }

    // selects the gameobjects inside the cube to stay visible and destroys the cube afterwards
    private void slice()
    {
        Bounds cubeBounds = slicingCube.transform.GetComponent<Renderer>().bounds;
        foreach (GameObject gameObject in gameObjects) if (!cubeBounds.Contains(gameObject.transform.position)) gameObject.SetActive(false);
        slice_Container.style.display = DisplayStyle.None;
        Destroy(slicingCube);
    }
    // behaviour of sliders for slicing
    private void X_Position_Change(ChangeEvent<float> evt) {
        slicingCube.transform.position = new Vector3(evt.newValue * (float)(BOX_BOUND_X / 100), slicingCube.transform.position.y, slicingCube.transform.position.z);
    }

    private void Y_Position_Change(ChangeEvent<float> evt) {
        slicingCube.transform.position = new Vector3(slicingCube.transform.position.x, evt.newValue * (float)(BOX_BOUND_Y / 100), slicingCube.transform.position.z);
    }

    private void Z_Position_Change(ChangeEvent<float> evt) {
        slicingCube.transform.position = new Vector3(slicingCube.transform.position.x, slicingCube.transform.position.y, evt.newValue * (float)(BOX_BOUND_Z / 100));
    }

    private void X_Width_Change(ChangeEvent<float> evt) {
        slicingCube.transform.localScale = new Vector3(evt.newValue * (float)(BOX_BOUND_X / 100), slicingCube.transform.position.y, slicingCube.transform.position.z);
    }
    private void Y_Width_Change(ChangeEvent<float> evt) {
        slicingCube.transform.localScale = new Vector3(slicingCube.transform.position.x, evt.newValue * (float)(BOX_BOUND_Y / 100), slicingCube.transform.position.z);
    }
    private void Z_Width_Change(ChangeEvent<float> evt) {
        slicingCube.transform.localScale = new Vector3(slicingCube.transform.position.x, slicingCube.transform.position.y, evt.newValue * (float)(BOX_BOUND_Z / 100));
    }

    // if one of the protein toggles changes, it disable/enable all the related gameobjects 
    private void OnToggleValueChanged(ChangeEvent<bool> evt, bool value, string name)
    {
        for (int i = 0; i < gameObjects.Count; i++)
        {
            GameObject gameObject = (GameObject)gameObjects[i];
            if (gameObject.name.Equals(name)) gameObject.SetActive(value);
        }
    }

    // changes the protein toggles, if visibility also changes
    private void toggleToggle(bool value)
    {
        for (int i = 0; i < proteins_Toggles.Count; i++)
        {
            Toggle toggle = (Toggle)proteins_Toggles[i];
            toggle.value = value;
        }
    }
    // changes the visibility of all gameobjects
    private void toggleVisibility()
    {
        if (isVisible)
        {
            isVisible = false;
            turnOffVisibility();
        }
        else
        {
            isVisible = true;
            turnOnVisibility();
        }
    }
    private void turnOffVisibility()
    {
        isVisible = false;
        foreach (GameObject gameObject in gameObjects) gameObject.SetActive(false);
        toggleToggle(false);
    }
    private void turnOnVisibility()
    {
        isVisible = true;
        foreach (GameObject gameObject in gameObjects) gameObject.SetActive(true);
        toggleToggle(true);
    }
    private void toggleResource()
    {
        if(resource_isVisible)
        {
            resource_isVisible = false;
            resource_ScrollView.style.display = DisplayStyle.None;
        }
        else 
        { 
            resource_isVisible = true;
            resource_ScrollView.style.display = DisplayStyle.Flex;
        }
    }
    private void toggleGui()
    {
        if (root_isVisible)
        {
            root.style.display = DisplayStyle.None;
            root_isVisible = false;
        }
        else
        {
            root.style.display = DisplayStyle.Flex;
            root_isVisible = true;
        }
    }

    private void toggleLerpMode()
    {
        lerpMode = !lerpMode;
    }
    private void toggleBond()
    {
        if (isBond)
        {
            removeBonds();
            turnOnVisibility();
            analysis_Container.style.display = DisplayStyle.None;
            isBond = false;
        } 
        else
        {
            bond();
            analysis_Container.style.display = DisplayStyle.Flex;
            isBond = true;
        }
    }
    private void toggleImportBonds()
    {
        if(displayImportBonds)
        {
            displayImportBonds = false;
            removeImportBonds(); 
        }
        else
        {
            displayImportBonds = true;
            bondsReader = new StreamReader(bonds_Path);
            while(!bondsReader.EndOfStream)
            {
                if (bondsReader.ReadLine().StartsWith("ITEM: TIMESTEP"))
                {
                    if (long.Parse(bondsReader.ReadLine()) == timeStep)
                    {
                        loadImportBonds();
                        break;
                    }
                }
            }
        }
    }
    private void removeImportBonds()
    {
        foreach (Bond import_Bond in import_Bonds) Destroy(import_Bond.bond);
        import_Bonds = new ArrayList();
    }
    private void loadImportBonds()
    {
        removeImportBonds();
        bondsReader.ReadLine(); // ITEM: ATOMS
        while (!bondsReader.EndOfStream)
        {
            string line = bondsReader.ReadLine();
            if (line.StartsWith("ITEM: TIMESTEP"))
            {
                bondsReader.ReadLine();
                break;
            }
            string[] gameobjects_involved = line.Split(" ");
            GameObject gameObject = (GameObject) gameObjects[int.Parse(gameobjects_involved[0])];
            GameObject gameObject2 = (GameObject) gameObjects[int.Parse(gameobjects_involved[1])];
            import_Bonds.Add(createBond(gameObject, gameObject2));
        }
        presenting_Label.text = import_Bonds.Count.ToString();
    }
    private void escape()
    {
        Application.Quit();
    }

    public class Protein
    {
        public string name;
        public float radius;
        public Color hexColor;
        public Dictionary<string, float> bindingdistance = new Dictionary<string, float>();

        public Protein(string name, float radius, Color hexColor)
        {
            this.name = name;
            this.radius = radius;
            this.hexColor = hexColor;
        }
    }

    public class Bond
    {
        public GameObject bond;
        public GameObject gameObject;
        public GameObject gameObject2;

        public Bond(GameObject bond, GameObject gameObject, GameObject gameObject2)
        {
            this.gameObject = gameObject;
            this.gameObject2 = gameObject2;
            this.bond = bond;
        }
    }
}


