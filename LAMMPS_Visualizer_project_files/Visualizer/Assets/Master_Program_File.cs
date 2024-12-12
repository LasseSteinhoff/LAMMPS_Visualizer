using System;
using System.IO;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;
using System.Globalization;
using System.Linq;
using Random = System.Random;
using System.Text;
using static Master_Program_File;

public class Master_Program_File : MonoBehaviour
{
    // UI related declaration
    private static VisualElement root, mouse_interaction_container, analysis_container;
    private static bool root_isVisible = true,
        cube_isVisible = false,
        resource_isVisible = false;
    private static Label timestep_label, info_label, fps_label;
    private static Slider time_step_slider;
    private static ScrollView structures_scrollView, proteins_scrollView, resource_scrollView, combinations_scrollView;
    private static List<Toggle> proteins_toggles = new List<Toggle>();
    private static GameObject slicing_cube;
    private static Button escape_button, open_resource_button, load_all_time_steps_button, reload_data_button, lerping_button, minimize_button,
        open_slice_button, slice_button, apply_coordinates_button, apply_binding_distance_button, visibility_switch_button, adjust_slice_button,
        create_bonds_button, import_bonds_button, binding_distance_button, analyse_bonds_button, analyse_import_bonds_button, apply_lerp_factor_textField;
    private static TextField coordinates_textField, binding_distance_textField, lerp_factor_textField, cube_width, cube_position;


    // UI initalization
    private void OnEnable()
    {
        root = GetComponent<UIDocument>().rootVisualElement;

        // Top Centre
        info_label = root.Q<Label>("InfoLabel");

        // Centre
        resource_scrollView = root.Q<ScrollView>("Resource_ScrollView");
        analysis_container = root.Q<VisualElement>("AnalysisScrollViews");
        combinations_scrollView = analysis_container.Q<ScrollView>("Combinations");
        structures_scrollView = analysis_container.Q<ScrollView>("Structures");

        // Top Left
        timestep_label = root.Q<Label>("Timestep_Label");
        proteins_scrollView = root.Q<ScrollView>("Proteins");


        // Top Right
        escape_button = root.Q<Button>("Escape");
        escape_button.clicked += () => Escape();
        fps_label = root.Q<Label>("Fps_Label");

        // Right
        mouse_interaction_container = root.Q<VisualElement>("MouseInteractionContainer");
        coordinates_textField = mouse_interaction_container.Q<TextField>("Coordinates");
        apply_coordinates_button = mouse_interaction_container.Q<Button>("ApplyCoordinates");
        apply_coordinates_button.clicked += () => TeleportTowardsCoordinates();
        open_resource_button = mouse_interaction_container.Q<Button>("OpenResource");
        open_resource_button.clicked += () => ToggleResource();
        lerping_button = mouse_interaction_container.Q<Button>("Lerping");
        lerping_button.clicked += () => ToggleLerpMode();
        visibility_switch_button = mouse_interaction_container.Q<Button>("VisibilitySwitch");
        visibility_switch_button.clicked += () => ToggleVisibility();
        load_all_time_steps_button = mouse_interaction_container.Q<Button>("LoadAllTimeSteps");
        load_all_time_steps_button.clicked += () => LoadAllTimeSteps();
        reload_data_button = mouse_interaction_container.Q<Button>("ReloadData");
        reload_data_button.clicked += () => ReloadData();
        time_step_slider = mouse_interaction_container.Q<Slider>("Timestep_Slider");
        time_step_slider.RegisterValueChangedCallback(evt => SliderChange(evt));
        lerp_factor_textField = mouse_interaction_container.Q<TextField>("LerpFactor");
        apply_lerp_factor_textField = mouse_interaction_container.Q<Button>("ApplyLerpFactor");
        apply_lerp_factor_textField.clicked += () => ChangeLerpFactor();
        binding_distance_textField = mouse_interaction_container.Q<TextField>("BindingDistanceInput");
        apply_binding_distance_button = mouse_interaction_container.Q<Button>("ApplyBindingDistance");
        apply_binding_distance_button.clicked += () => ApplyBindingDistance(false);
        minimize_button = mouse_interaction_container.Q<Button>("ApplyMinimize");
        minimize_button.clicked += () => ApplyBindingDistance(true);
        binding_distance_button = mouse_interaction_container.Q<Button>("BindingDistanceButton");
        binding_distance_button.clicked += () => ApplyFormatBindingDistance();
        create_bonds_button = mouse_interaction_container.Q<Button>("CreateBonds");
        create_bonds_button.clicked += () => ToggleBond();
        open_slice_button = mouse_interaction_container.Q<Button>("OpenSlice");
        open_slice_button.clicked += () => ToggleSlice();
        analyse_bonds_button = mouse_interaction_container.Q<Button>("AnalyseBonds");
        analyse_bonds_button.clicked += () => BondAnalysis(bonds);
        import_bonds_button = mouse_interaction_container.Q<Button>("ImportBonds");
        import_bonds_button.clicked += () => ToggleImportBonds();
        analyse_import_bonds_button = mouse_interaction_container.Q<Button>("AnalyseImportBonds");
        analyse_import_bonds_button.clicked += () => BondAnalysis(active_import_bonds);
        slice_button = mouse_interaction_container.Q<Button>("Slice");
        slice_button.clicked += () => Slice();
        adjust_slice_button = mouse_interaction_container.Q<Button>("AdjustSlice");
        adjust_slice_button.clicked += () => AdjustCube();
        cube_position = mouse_interaction_container.Q<TextField>("CubePosition");
        cube_width = mouse_interaction_container.Q<TextField>("CubeWidth");
    }


    private Movement movement = null;

    private GameObject singleton = null;
    private GameObject suspected_object = null;
    private GameObject first = null;

    private static List<GameObject> game_objects = new List<GameObject>();
    public static List<LAMMPS> lammps = new List<LAMMPS>();
    private static List<Protein> proteins = new List<Protein>();

    private static StreamReader data_reader = null;
    private StreamReader format_reader = null;
    private StreamReader bonds_reader = null;

    private string data_path = string.Empty;
    private string bonds_path = string.Empty;

    private List<Bond> bonds = new List<Bond>();
    private List<ImportedBonds> import_bonds = new List<ImportedBonds>();
    private List<Bond> active_import_bonds = new List<Bond>();
    private List<Vector3> original_position = new List<Vector3>();
    private List<List<GameObject>> structures = new List<List<GameObject>>();
    private Dictionary<GameObject, int> bond_figures = new Dictionary<GameObject, int>();
    private Dictionary<Button, int> structure_size_button = new Dictionary<Button, int>();
    private List<GameObject> temp_game_objects = new List<GameObject>();
    private HashSet<GameObject> visited_gameObjects = new HashSet<GameObject>();
    private HashSet<GameObject> bonds_seen_GOs = new HashSet<GameObject>();
    private Dictionary<int, List<List<GameObject>>> same_structure_size = new Dictionary<int, List<List<GameObject>>>();
    private Dictionary<GameObject, int> protein_map;
    private Dictionary<string, int> protein_combinations = new Dictionary<string, int>();
    private Dictionary<string, List<GameObject>> gameObject_for_teleport = new Dictionary<string, List<GameObject>>();
    private AnalysisResult analysisResult = new AnalysisResult();

    private int current_step = 0;
    private int screenshot_count;

    private float fps;
    private float lerp_factor = .5f;
    private float binding_distance = 100;
    private float delta_time;
    private float current;
    private float long_click_duration = .5f;
    private float mouse_down_time;

    private bool is_simulation_visible = true;
    private bool is_mouse_interaction_visible = false;
    private bool loaded_all_timesteps = false;
    private bool reached_end = false;
    private bool format_binding_distance = false;
    private bool lerp_mode = false;
    private bool bond_mode = false;
    private bool import_bond_mode = false;
    private bool suspect_mode = false;
    private bool bond_minimize = false;
    private bool JSON_mode = false;
    private bool analysis_mode = false;

    // Start is called before the first frame update
    void Start()
    {
        GameObject[] allGameObjects = FindObjectsOfType<GameObject>();
        foreach (GameObject gameObject in allGameObjects)
            if (gameObject.name == "Singleton")
                singleton = gameObject;

        Application.targetFrameRate = 60;
        Camera.main.enabled = true;
        movement = Camera.main.GetComponent<Movement>();

        // creating directories
        if (!Directory.Exists(Application.dataPath + "/data"))
            Directory.CreateDirectory(Application.dataPath + "/data");
        if (!Directory.Exists(Application.dataPath + "/proteinformat"))
            Directory.CreateDirectory(Application.dataPath + "/proteinformat");
        if (!Directory.Exists(Application.dataPath + "/bonds"))
            Directory.CreateDirectory(Application.dataPath + "/bonds");
        if (!Directory.Exists(Application.dataPath + "/screenshot"))
            Directory.CreateDirectory(Application.dataPath + "/screenshot");
        if (!Directory.Exists(Application.dataPath + "/bondanalysis"))
            Directory.CreateDirectory(Application.dataPath + "/bondanalysis");

        screenshot_count = Directory.GetFiles(Application.dataPath + "/screenshot").Length;

        /**
         * loading all paths of these three directories
         * first one will be used 
         * all will be accessable in a scrollview with a button loading this path 
         */
        string[] formatDir = Directory.GetFiles(Application.dataPath + "/proteinformat");
        if (formatDir.Length > 0)
        {
            initFormat(formatDir[0]);
            Label format_Label = new Label();
            format_Label.text = "Format";
            format_Label.style.color = Color.white;
            resource_scrollView.Add(format_Label);
            foreach (string format_path in formatDir)
            {
                Button button = new Button();
                button.text = format_path;
                button.clicked += () =>
                {
                    proteins.Clear();
                    proteins_toggles.Clear();
                    proteins_scrollView.Clear();
                    initFormat(format_path);
                    ReloadData();
                    ToggleResource();
                };
                resource_scrollView.Add(button);
            }
        }

        string[] dataDir = Directory.GetFiles(Application.dataPath + "/data");
        if (dataDir.Length > 0)
        {
            data_path = dataDir[0];
            data_reader = new StreamReader(data_path);
            LAMMPS first_lammps = new LAMMPS();
            first_lammps.readData();
            first_lammps.initializeGameObjects();
            lammps.Add(first_lammps);
            Label data_Label = new Label();
            data_Label.text = "Data";
            data_Label.style.color = Color.white;
            resource_scrollView.Add(data_Label);
            foreach (string path in dataDir)
            {
                Button button = new Button();
                button.text = path;
                button.clicked += () =>
                {
                    data_path = path;
                    ReloadData();
                    ToggleResource();
                };
                resource_scrollView.Add(button);
            }
        }

        string[] bondsDir = Directory.GetFiles(Application.dataPath + "/bonds");
        if (bondsDir.Length > 0)
        {
            bonds_path = bondsDir[0];
            Label bonds_Label = new Label();
            bonds_Label.text = "Bonds";
            bonds_Label.style.color = Color.white;
            resource_scrollView.Add(bonds_Label);
            foreach (string s in bondsDir)
            {
                Button button = new Button();
                button.text = s;
                button.clicked += () =>
                {
                    bonds_path = s;
                    if (!import_bond_mode)
                        ToggleImportBonds();
                    ToggleResource();
                };
                resource_scrollView.Add(button);
            }
        }
    }

    /** 
     * creates a representation of all involved proteins from the format
     * with a toggle to manipulate the visibility of this protein
     * and display the color to differantiate it from the others 
     */
    private void initFormat(string format_path)
    {
        format_reader = new StreamReader(format_path);
        while (!format_reader.EndOfStream)
        {
            string line = format_reader.ReadLine();

            if (line.StartsWith("//"))
                continue; // for comments

            line = line.Replace(" ", ""); // white space elimination
            string[] protein_attributes = line.Split("|");
            Color hexColor = UnityEngine.ColorUtility.TryParseHtmlString(protein_attributes[2], out Color resultColor) ? resultColor : Color.white;
            Protein protein = new Protein(
                protein_attributes[0],
                float.Parse(protein_attributes[1],
                CultureInfo.InvariantCulture.NumberFormat),
                hexColor);
            for (int i = 3; i < protein_attributes.Length; i++)
            {
                string[] binding_attributes = protein_attributes[i].Split(";");
                protein.bindingdistance[binding_attributes[0]] = float.Parse(binding_attributes[1], CultureInfo.InvariantCulture.NumberFormat);
            }
            Toggle toggle = new Toggle();
            toggle.text = protein.name;
            toggle.style.color = protein.hexColor;
            toggle.RegisterValueChangedCallback(evt => OnToggleValueChanged(evt, toggle.value, protein.name));
            toggle.value = true;
            toggle.focusable = false;
            proteins_scrollView.Add(toggle);
            proteins_toggles.Add(toggle);
            proteins.Add(protein);
        }
        format_reader.Close();
    }

    // Update is called once per frame
    void Update()
    {
        // right click -> Input.GetMouseButtonDown(1) & left click -> Input.GetMouseButtonDown(0)
        if (Input.GetMouseButtonUp(1))
            ToggleMouseInteractionContainer();

        // hotkey bindings 
        if (Input.GetKeyDown(KeyCode.C))
            ToggleGui();
        if (Input.GetKeyDown(KeyCode.Escape))
            Escape();
        if (Input.GetKeyDown(KeyCode.X))
            ToggleVisibility();
        if (Input.GetKeyDown(KeyCode.H))
            ToggleBond();
        if (Input.GetKeyDown(KeyCode.J))
            BondAnalysis(bonds);
        if (Input.GetKeyDown(KeyCode.N))
            BondAnalysis(active_import_bonds);
        if (Input.GetKeyDown(KeyCode.R))
            ToggleLerpMode();
        if (Input.GetKeyDown(KeyCode.G))
            ToggleSlice();
        if (Input.GetKeyDown(KeyCode.B))
            ToggleImportBonds();
        if (Input.GetKeyDown(KeyCode.Z))
            CaptureScreenshot();
        if (Input.GetKey(KeyCode.Y))
            LoadAllTimeSteps();
        if (Input.GetKeyUp(KeyCode.T))
            ToggleResource();
        if (Input.GetKey(KeyCode.V))
            TeleportToOrigin();
        if (Input.GetKeyDown(KeyCode.U))
            ReloadData();
        if (Input.GetKeyDown(KeyCode.O))
            ToggleJSON();
        if (Input.GetKeyDown(KeyCode.P))
            WriteJSONFile();
        if (Input.GetKeyDown(KeyCode.Return))
            TeleportTowardsCoordinates();

        // if data reaches the end, the forward movement in time will be restricted
        if (!reached_end)
        {
            // gives each gameobject it's new position by linear interpolation
            if (lerp_mode)
            {
                LAMMPS current_lammps = new LAMMPS();
                if (loaded_all_timesteps && current_step < lammps.Count - 1 && current >= 1)
                {
                    UpdateOriginalPositions();
                    current_lammps = lammps[++current_step];
                    time_step_slider.value = current_step;
                    current = 0;
                    Lerp(current_lammps);
                }
                else if (!loaded_all_timesteps && !data_reader.EndOfStream && current >= 1)
                {
                    UpdateOriginalPositions();
                    ++current_step;
                    current_lammps.readData();
                    current_lammps.UpdatePosition();
                    lammps.Add(current_lammps);
                    current = 0;
                    Lerp(current_lammps);
                }
                else Lerp(current_lammps);
            }
            else if (JSON_mode || (Input.GetKey(KeyCode.LeftShift) && Input.GetKey(KeyCode.E) || Input.GetKeyDown(KeyCode.E))) // forward in time
            {
                if (loaded_all_timesteps && current_step < lammps.Count - 1) // stops if end is reached
                {
                    LAMMPS next_lammps = lammps[++current_step];
                    next_lammps.UpdatePosition();
                    time_step_slider.value = current_step;
                }
                else if (!loaded_all_timesteps)
                {
                    LAMMPS next_lammps = new LAMMPS();

                    // if user went back in time
                    if (current_step < lammps.Count - 1)
                        next_lammps = lammps[current_step + 1];
                    else
                    {
                        if (!data_reader.EndOfStream)
                            next_lammps.readData();
                        else reached_end = true;
                    }
                    if (!reached_end)
                    {
                        next_lammps.UpdatePosition();
                        ++current_step;
                        if (current_step > lammps.Count - 1)
                            lammps.Add(next_lammps);
                        if (lammps.Count > 1000)
                            lammps.RemoveAt(0);
                    }
                }
                if (bond_mode)
                    CreateBonds();
                else if (import_bond_mode)
                    UpdateImportBonds();
            }

            // fast forward in time
            if (Input.GetKeyDown(KeyCode.F))
            {
                lerp_mode = false;
                if (loaded_all_timesteps && current_step + 100 <= lammps.Count - 1)
                {
                    current_step += 100;
                    LAMMPS current_lammps = lammps[current_step];
                    current_lammps.UpdatePosition();
                    time_step_slider.value = current_step;
                }

                if (!loaded_all_timesteps)
                {
                    for (int i = 0; i < 99; i++)
                    {
                        LAMMPS skipped_lammps = new LAMMPS();
                        if (current_step < lammps.Count - 1)
                            ++current_step;
                        else if (!data_reader.EndOfStream)
                        {
                            skipped_lammps.readData();
                            ++current_step;
                            lammps.Add(skipped_lammps);
                        }
                    }
                    LAMMPS current_lammps = lammps[lammps.Count - 1];
                    current_lammps.UpdatePosition();
                }
            }
        }
        // backward in time
        if (current_step > 0 && !lerp_mode && (Input.GetKey(KeyCode.LeftShift) && Input.GetKey(KeyCode.Q) || Input.GetKeyDown(KeyCode.Q)))
        {
            LAMMPS predecessor = lammps[--current_step];
            predecessor.UpdatePosition();
            if (current_step < lammps.Count - 1)
                reached_end = false;
            if (bond_mode)
                CreateBonds();
            else if (import_bond_mode)
                UpdateImportBonds();
        }
        // RayCastHit Behaviour
        if (Input.GetMouseButton(0))
        {
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            RaycastHit hit;
            if (Physics.Raycast(ray, out hit))
            {
                GameObject clickedObject = hit.collider.gameObject;

                // if bond analysis was executed, it can present the total number of bonds in a structure
                if (clickedObject.name.Equals("Bond"))
                {

                    if (bond_figures != null)
                    {
                        foreach (Bond bond in bonds)
                        {
                            if (ReferenceEquals(bond.bond, clickedObject))
                            {
                                if (bond_figures.ContainsKey(bond.gameObject) || bond_figures.ContainsKey(bond.gameObject2))
                                {
                                    StringBuilder stringBuilder = new StringBuilder();
                                    List<int> protein_combination = new List<int>();

                                    foreach (GameObject g in structures[bond_figures[bond.gameObject]])
                                        protein_combination.Add(protein_map[g]);

                                    protein_combination = protein_combination.Distinct().ToList();
                                    protein_combination.Sort();

                                    for (int i = 0; i < protein_combination.Count; i++)
                                        stringBuilder.Append(protein_combination[i]);

                                    string combination = stringBuilder.ToString();
                                    stringBuilder.Clear();
                                    List<int> protein_type = new List<int>();
                                    stringBuilder.Append(" {");
                                    for (int i = 0; i < combination.Length; i++)
                                        protein_type.Add((combination[i] - '0'));
                                    protein_type = protein_type.Distinct().ToList();
                                    foreach (int i in protein_type)
                                        stringBuilder.Append(proteins[i - 1].name + " ");
                                    stringBuilder.Append("} ");
                                    stringBuilder.Append(structures[bond_figures[bond.gameObject]].Count.ToString() + " proteins involved");
                                    info_label.text = stringBuilder.ToString();
                                }
                                else info_label.text = "Not Found! Maybe no Analysis applied yet!";
                            }
                        }
                    }

                }
                else
                {
                    if (first == null)
                    {

                        first = clickedObject;
                    }
                    else if (!ReferenceEquals(first, clickedObject))
                    {
                        info_label.text = "Euklid Distance : {" + first.name + "," + clickedObject.name + "} " + Vector3.Distance(first.transform.position, clickedObject.transform.position);
                        first = null;
                    }

                }
            }
        }

        // accelerate towards the clicked object by long click
        if (Input.GetMouseButtonDown(0))
        {
            mouse_down_time = Time.time;
            suspect_mode = false;
        }

        if (Input.GetMouseButtonUp(0) & !movement.isLocked)
        {

            if (Time.time - mouse_down_time >= long_click_duration)
            {
                Ray ray2 = Camera.main.ScreenPointToRay(Input.mousePosition);
                RaycastHit hit2;
                if (Physics.Raycast(ray2, out hit2))
                {
                    foreach (Protein protein in proteins)
                        if (protein.name.Equals(hit2.collider.gameObject.name))
                        {
                            info_label.text = protein.name;
                            suspect_mode = true;
                            suspected_object = hit2.collider.gameObject;
                            info_label.text = "Turn off suspect mode by left click!";
                        }
                }
            }
        }
        // steady camera lock onto suspected GO after long click
        if (suspect_mode)
        {
            current += Mathf.MoveTowards(0, 1, .1f);
            Camera.main.transform.position = Vector3.Lerp(Camera.main.transform.position,
                new Vector3(
                    suspected_object.transform.position.x + 50,
                    suspected_object.transform.position.y + 50,
                    suspected_object.transform.position.z + 50),
                current);
            Camera.main.transform.LookAt(suspected_object.transform);
            if (current >= 1)
                current = 0;
        }

        // updates info label
        delta_time += (Time.unscaledDeltaTime - delta_time) * 0.1f;
        fps = Mathf.Round(1.0f / delta_time);
        fps_label.text = " FPS: " + fps +
            " X: " + Math.Round(Camera.main.transform.position.x) +
            " Y: " + Math.Round(Camera.main.transform.position.y) +
            " Z: " + Math.Round(Camera.main.transform.position.z);
    }

    /*
     * Lerping refers to a linear interpolation between two time steps.
     */
    private void Lerp(LAMMPS current_lammps)
    {
        current += Mathf.MoveTowards(0, 1, lerp_factor);
        for (int i = 0; i < game_objects.Count; i++)
            game_objects[i].transform.position = Vector3.Lerp(original_position[i], current_lammps.GetCoordinates(i), current * Time.deltaTime);
    }

    /* creates bonds in a given distance threshold of a protein with the collision physics of the OverlapSphere function
     * minimize boolean is for the prim algorithm building a minimal spanning tree
     * format binding distance boolean is the imported binding distance from the protein format
     * default is the input binding distance with n over 2 combinations of possibe bonds
     */
    private void CreateBonds()
    {
        TurnOnVisibility();
        RemoveBonds();
        RemoveImportBonds();
        visited_gameObjects.Clear();
        protein_map = lammps[current_step].GetProteinMap();
        combinations_scrollView.Clear();
        structures_scrollView.Clear();

        // apply a random recursion for a global minium set of bonds
        if (bond_minimize)
        {
            temp_game_objects = new List<GameObject>(game_objects);
            Random rand = new Random();
            while (temp_game_objects.Count > 0)
            {
                GameObject g = temp_game_objects[rand.Next(0, temp_game_objects.Count)];
                if (!visited_gameObjects.Contains(g))
                    TraverseRecursion(g);
                temp_game_objects.Remove(g);
            }
        }
        else
        {
            foreach (GameObject gameObject in game_objects)
            {   // apply protein format
                if (format_binding_distance)
                {
                    Protein protein = proteins[protein_map[gameObject] - 1];
                    if (protein.bindingdistance.Keys.Any())
                    {
                        foreach (GameObject partner in CheckCollision(Physics.OverlapSphere(gameObject.transform.position, protein.bindingdistance.Values.Max() + protein.radius), gameObject))
                        {
                            Bond bond = new Bond(gameObject, partner);
                            if (protein.bindingdistance.TryGetValue(partner.name, out float bindingdistance)) // valid partner 
                            {
                                if (bond.length > bindingdistance && bond.length <= 0) // valid length
                                    continue;
                                bonds.Add(bond);
                            }
                        }
                    }
                }
                else
                {
                    visited_gameObjects.Add(gameObject);
                    // apply binding distance
                    foreach (GameObject partner in CheckCollision(Physics.OverlapSphere(gameObject.transform.position, binding_distance), gameObject))
                    {
                        Bond bond = new Bond(gameObject, partner);
                        if (bond.length > 0 && !visited_gameObjects.Contains(partner))
                            bonds.Add(bond);
                    }

                }
            }
        }
        TurnOffVisibility();
        info_label.text = bonds.Count.ToString() + " Bonds";

        // the bonds itself can be a collider from overlapsphere that's why the initalization is here
        foreach (Bond bond in bonds)
        {
            CreateBond(bond);
            bond.bond.SetActive(true);
        }
        if (analysis_mode || JSON_mode)
            BondAnalysis(bonds);
    }

    private ArrayList CheckCollision(Collider[] colliders, GameObject gameObject)
    {
        ArrayList possible_bond = new ArrayList();
        foreach (Collider collider in colliders)
        {
            // inside the collision is the gameobject itself
            if (ReferenceEquals(collider.gameObject, gameObject))
                continue;

            // inside the collision is the singleton master file game object
            if (ReferenceEquals(collider.gameObject, singleton))
                continue;

            // inside the collision is the main camera game object
            if (ReferenceEquals(collider.gameObject, Camera.main.gameObject))
                continue;

            // inside the collision is the cube object
            if (ReferenceEquals(collider.gameObject, slicing_cube))
                continue;

            possible_bond.Add(collider.gameObject);
        }

        return possible_bond;
    }

    /*
     * building a global minimal tree 
     * after inserting the possible bonds as edges, they will be sorted after the length
     * each time the shortest bond is taken, the next recursion is called, if the visited_gameObjects hashSet hasnot seen the two GOs yet
     */
    private void TraverseRecursion(GameObject g)
    {
        visited_gameObjects.Add(g);
        Bond next_bond = null;
        foreach (GameObject partner in CheckCollision(Physics.OverlapSphere(g.transform.position, binding_distance), gameObject))
        {
            if (!visited_gameObjects.Contains(partner))
            {
                Bond new_bond = new Bond(g, partner);
                if (next_bond == null)
                    next_bond = new_bond;
                else if (new_bond.length > 0 && new_bond.length < next_bond.length)
                    next_bond = new_bond;
            }
        }
        if (next_bond != null)
        {
            if (!visited_gameObjects.Contains(next_bond.gameObject))
            {
                TraverseRecursion(next_bond.gameObject);
                bonds.Add(next_bond);
            }
            if (!visited_gameObjects.Contains(next_bond.gameObject2))
            {
                TraverseRecursion(next_bond.gameObject2);
                bonds.Add(next_bond);
            }
        }
    }

    /* 
     * creates a cylinder as a bond at the midpoint between two gameobjects 
     * scaling it to fit the space
     */
    private void CreateBond(Bond bond_)
    {
        Vector3 midPoint = (bond_.gameObject.transform.position + bond_.gameObject2.transform.position) / 2f;
        GameObject bond = GameObject.CreatePrimitive(PrimitiveType.Cylinder);
        bond.name = "Bond";
        bond.transform.localScale = new Vector3(.5f, bond_.length / 2f, .5f);
        bond.transform.position = midPoint;
        bond.transform.LookAt(bond_.gameObject2.transform.position);
        bond.transform.Rotate(new Vector3(90f, 0f, 0f));
        bond_.bond = bond;
    }

    // sorting the bonds by using a hashmap to know, where particapating gameobjects are
    private void BondAnalysis(List<Bond> bonds)
    {
        VisibleMouseInteractionContainer();
        is_mouse_interaction_visible = true;
        structures = new List<List<GameObject>>();
        bond_figures = new Dictionary<GameObject, int>();
        List<int> left_structure_indices = new List<int>();
        protein_map = lammps[current_step].GetProteinMap();

        foreach (Bond bond in bonds)
        {
            GameObject g1 = bond.gameObject;
            GameObject g2 = bond.gameObject2;
            bool in_structure = bond_figures.TryGetValue(g1, out int g1_index);
            bool in_structure2 = bond_figures.TryGetValue(g2, out int g2_index);

            if (!in_structure & !in_structure2) // creates a figure list, because the bonds havn't been seen yet
            {
                bond_figures[g1] = structures.Count;
                bond_figures[g2] = structures.Count;
                structures.Add(new List<GameObject> { g1, g2 });
            }
            else if (in_structure && in_structure2) // if both are already in structure lists -> merge
            {
                if (g1_index != g2_index) // not inside the same list
                {
                    foreach (GameObject gameObject in structures[g2_index])
                    {
                        if (!structures[g1_index].Contains(gameObject))
                        {
                            structures[g1_index].Add(gameObject);
                            bond_figures[gameObject] = g1_index;
                        }
                    }
                    left_structure_indices.Add(g2_index);
                }
            }
            else if (in_structure) // advances a figure list
            {
                structures[g1_index].Add(g2);
                bond_figures.Add(g2, g1_index);
            }
            else if (in_structure2) // advances a figure list
            {
                structures[g2_index].Add(g1);
                bond_figures.Add(g1, g2_index);
            }
        }
        while (left_structure_indices.Count > 0)
        {
            int max = left_structure_indices.Max();
            structures.RemoveAt(max);
            left_structure_indices.Remove(max);
        }
        //perpare to sort after the count of structures and protein combinations
        same_structure_size = new Dictionary<int, List<List<GameObject>>>();
        protein_combinations = new Dictionary<string, int>();
        gameObject_for_teleport = new Dictionary<string, List<GameObject>>();

        foreach (List<GameObject> structure in structures)
        {
            StringBuilder stringBuilder = new StringBuilder();
            List<int> protein_combination = new List<int>();
            foreach (GameObject g in structure)
                protein_combination.Add(protein_map[g]);

            protein_combination = protein_combination.Distinct().ToList();
            protein_combination.Sort();

            for (int i = 0; i < protein_combination.Count; i++)
                stringBuilder.Append(protein_combination[i]);

            string key = stringBuilder.ToString();

            if (gameObject_for_teleport.TryGetValue(key, out List<GameObject> teleport))
                teleport.Add(structure[0]);
            else gameObject_for_teleport[key] = new List<GameObject> { structure[0] };

            if (!protein_combinations.ContainsKey(key))
                protein_combinations.Add(key, 1);
            else if (protein_combinations.TryGetValue(key, out int count))
                protein_combinations[key] = ++count;

            if (same_structure_size.TryGetValue(structure.Count, out List<List<GameObject>> figures_with_same_size))
                figures_with_same_size.Add(structure);
            else same_structure_size.Add(structure.Count, new List<List<GameObject>> { structure });
        }
        // creates the buttons for the structure scrollview to teleport to the figure
        structures_scrollView.Clear();
        foreach (var key_value_pair in same_structure_size.OrderByDescending(key_value_pair => key_value_pair.Key))
        {
            if (same_structure_size.TryGetValue(key_value_pair.Key, out List<List<GameObject>> figures_with_same_size))
            {
                if (figures_with_same_size.Count > 0 && figures_with_same_size[0].Count > 0)
                {
                    GameObject gameObject = figures_with_same_size[0][0];
                    Button button = new Button();
                    button.text = figures_with_same_size.Count.ToString() + " x " + key_value_pair.Key.ToString();
                    structure_size_button[button] = 0;
                    button.clicked += () =>
                    {
                        if (structure_size_button.TryGetValue(button, out int index))
                        {
                            Camera.main.transform.position = figures_with_same_size[index++][0].transform.position;
                            structure_size_button[button] = index;
                            if (index > figures_with_same_size.Count - 1)
                                structure_size_button[button] = 0;
                        }
                        else info_label.text = "no button found!";
                    };
                    structures_scrollView.Add(button);
                }
            }
        }
        // creates buttons for the protein combinations scrollview
        combinations_scrollView.Clear();
        foreach (var kvp in protein_combinations.OrderByDescending(kvp => kvp.Value))
        {
            Button b = new Button();
            string combination = kvp.Key.ToString();
            StringBuilder stringBuilder = new StringBuilder();
            stringBuilder.Append(kvp.Value + " x { ");
            List<int> protein_type = new List<int>();

            for (int i = 0; i < combination.Length; i++)
                protein_type.Add((combination[i] - '0'));

            foreach (int i in protein_type)
                stringBuilder.Append(proteins[i - 1].name + " ");
            stringBuilder.Append("}");
            b.text = stringBuilder.ToString();
            int structure = 0;
            b.clicked += () =>
            {
                List<GameObject> gameObjects = gameObject_for_teleport[combination];
                Camera.main.transform.position = gameObjects[structure++].transform.position;
                if (structure > gameObjects.Count - 1)
                    structure = 0;
            };
            combinations_scrollView.Add(b);
        }
        if (JSON_mode)
            ProduceJSONFile();
    }

    // builds the cube destined for slicing
    private void ToggleSlice()
    {
        if (cube_isVisible)
        {
            cube_isVisible = false;
            cube_position.style.display = DisplayStyle.None;
            cube_width.style.display = DisplayStyle.None;
            slice_button.style.display = DisplayStyle.None;
            adjust_slice_button.style.display = DisplayStyle.None;
            Destroy(slicing_cube);
            TurnOnVisibility();
            InvisibleMouseInteractionContainer();
        }
        else
        {
            cube_isVisible = true;
            cube_position.style.display = DisplayStyle.Flex;
            cube_width.style.display = DisplayStyle.Flex;
            slice_button.style.display = DisplayStyle.Flex;
            adjust_slice_button.style.display = DisplayStyle.Flex;
            slicing_cube = GameObject.CreatePrimitive(PrimitiveType.Cube);
            VisibleMouseInteractionContainer();
            AdjustCube();
            TurnOnVisibility();
        }
    }
    private void AdjustCube()
    {
        string[] positions = cube_position.text.Split(" ");
        string[] width = cube_width.text.Split(" ");
        try
        {
            slicing_cube.transform.position = new Vector3(
                float.Parse(positions[0], CultureInfo.InvariantCulture.NumberFormat),
                float.Parse(positions[1], CultureInfo.InvariantCulture.NumberFormat),
                float.Parse(positions[2], CultureInfo.InvariantCulture.NumberFormat));
            slicing_cube.transform.localScale = new Vector3(
                float.Parse(width[0], CultureInfo.InvariantCulture.NumberFormat),
                float.Parse(width[1], CultureInfo.InvariantCulture.NumberFormat),
                float.Parse(width[2], CultureInfo.InvariantCulture.NumberFormat));
        }
        catch { info_label.text = "Not a valid number for slicing!"; }
    }
    // switches those gameobjects outside the cube to invisible and destroys the cube afterwards
    private void Slice()
    {
        AdjustCube();
        Bounds cubeBounds = slicing_cube.transform.GetComponent<Renderer>().bounds;
        int counter = 0;

        foreach (GameObject gameObject in game_objects)
            if (!cubeBounds.Contains(gameObject.transform.position))
                gameObject.SetActive(false);
            else
                counter++;
        Destroy(slicing_cube);
        cube_isVisible = false;
        info_label.text = counter.ToString() + " Proteins inside";
    }



    // if imported bonds should be displayed, the current time step is searched and then loaded
    private void ToggleImportBonds()
    {
        if (import_bond_mode)
        {
            bonds_reader.Close();
            import_bond_mode = false;
            RemoveImportBonds();
            analyse_import_bonds_button.style.display = DisplayStyle.None;
            InvisibleMouseInteractionContainer();
            combinations_scrollView.Clear();
            structures_scrollView.Clear();
        }
        else
        {
            import_bond_mode = true;
            bond_mode = false;
            analyse_import_bonds_button.style.display = DisplayStyle.Flex;
            bonds_reader = new StreamReader(bonds_path);
            RemoveBonds();
            VisibleMouseInteractionContainer();
            combinations_scrollView.Clear();
            structures_scrollView.Clear();
            ImportedBonds import = new ImportedBonds();

            while (!bonds_reader.EndOfStream)
            {
                string line = bonds_reader.ReadLine();
                if (line.StartsWith("ITEM: TIMESTEP"))
                {
                    if (import.bonds.Count > 0)
                    {
                        import_bonds.Add(import);
                        import = new ImportedBonds();
                    }
                    try
                    {
                        import.timestep = long.Parse(bonds_reader.ReadLine());
                    }
                    catch
                    {
                        info_label.text = "False Import Bonds -> time step not a number! ";
                        return;
                    }
                    bonds_reader.ReadLine(); // ITEM: ATOMS                   
                }
                else
                {
                    string[] gameobjects_involved = line.Split(" ");
                    try
                    {
                        import.bonds.Add(Tuple.Create(int.Parse(gameobjects_involved[0]), int.Parse(gameobjects_involved[1])));
                    }
                    catch
                    {
                        info_label.text = "False Import Bonds -> ID is not a number! " + gameobjects_involved[0] + " " + gameobjects_involved[1];
                        return;
                    }
                }
            }
            import_bonds.Add(import);
            UpdateImportBonds();
            info_label.text = "The imported bonds has " + import_bonds.Count + " timesteps!";
        }
    }
    private void UpdateImportBonds()
    {
        RemoveImportBonds();
        foreach (ImportedBonds bonds in import_bonds)
            if (bonds.timestep == lammps[current_step].timestep)
                foreach (Tuple<int, int> bonds_ in bonds.bonds)
                {
                    try
                    {
                        Bond bond = new Bond(game_objects[bonds_.Item1], game_objects[bonds_.Item2]);
                        CreateBond(bond);
                        active_import_bonds.Add(bond);
                    }
                    catch
                    {
                        info_label.text = "False Import Input -> ID is to high or negative";
                    }
                }
    }
    private void ChangeLerpFactor()
    {
        try
        {
            if (lerp_factor_textField.text.ToString() != string.Empty)
                lerp_factor = float.Parse(lerp_factor_textField.text, CultureInfo.InvariantCulture);
        }
        catch
        {
            info_label.text = "No Valid Input! Recommondation : [.1,1]";
            lerp_factor = .5f;
        }
    }
    void ReloadData()
    {
        RemoveBonds();
        InvisibleMouseInteractionContainer();
        reached_end = false;
        data_reader = new StreamReader(data_path);
        LAMMPS first_lammps = new LAMMPS();
        first_lammps.readData();
        first_lammps.initializeGameObjects();
        lammps.Clear();
        lammps.Add(first_lammps);
        info_label.text = "";
        if (loaded_all_timesteps)
            time_step_slider.style.display = DisplayStyle.None;
        loaded_all_timesteps = false;
    }

    private void LoadAllTimeSteps()
    {
        data_reader = new StreamReader(data_path);
        lammps.Clear();

        while (!data_reader.EndOfStream)
        {
            LAMMPS current_lammps = new LAMMPS();
            if (current_lammps.readData())
                lammps.Add(current_lammps);
        }

        reached_end = false;
        loaded_all_timesteps = true;
        info_label.text = "The whole file was read with " + lammps.Count + " timesteps!";
        time_step_slider.style.display = DisplayStyle.Flex;
        time_step_slider.value = 0;
        time_step_slider.highValue = lammps.Count - 1;
        current_step = 0;
        lammps[current_step].UpdatePosition();
        VisibleMouseInteractionContainer();
    }
    // behaviour of sliders 
    private void SliderChange(ChangeEvent<float> evt)
    {
        if (time_step_slider == evt.currentTarget)
        {
            current_step = (int)time_step_slider.value;
            LAMMPS current_lammps = lammps[current_step];
            current_lammps.UpdatePosition();
        }
    }
    // if one of the protein toggles changes, it disable/enable all the related gameobjects 
    private void OnToggleValueChanged(ChangeEvent<bool> evt, bool value, string name)
    {
        for (int i = 0; i < game_objects.Count; i++)
        {
            if (game_objects[i].name.Equals(name))
                game_objects[i].SetActive(value);
        }
    }

    // changes the protein toggles, if visibility is changed
    private void ToggleToggle(bool value)
    {
        for (int i = 0; i < proteins_toggles.Count; i++)
            proteins_toggles[i].value = value;

    }
    // if right click freezes mouse input
    private void ToggleMouseInteractionContainer()
    {
        if (is_mouse_interaction_visible)
            InvisibleMouseInteractionContainer();
        else VisibleMouseInteractionContainer();
        is_mouse_interaction_visible = !is_mouse_interaction_visible;
    }
    private void VisibleMouseInteractionContainer()
    {
        mouse_interaction_container.style.display = DisplayStyle.Flex;
        analysis_container.style.display = DisplayStyle.Flex;
        movement.isLocked = true;
    }
    private void InvisibleMouseInteractionContainer()
    {
        mouse_interaction_container.style.display = DisplayStyle.None;
        analysis_container.style.display = DisplayStyle.None;
        movement.isLocked = false;
    }
    private void TeleportTowardsCoordinates()
    {
        string[] split = coordinates_textField.text.Split(" ");
        try
        {
            Camera.main.transform.position = new Vector3(float.Parse(split[0]), float.Parse(split[1]), float.Parse(split[2]));
            Camera.main.transform.LookAt(singleton.transform);
            mouse_interaction_container.style.display = DisplayStyle.None;
            InvisibleMouseInteractionContainer();
        }
        catch
        {
            info_label.text = "False Input of Coordinates!";
        }
    }
    private void ToggleVisibility()
    {
        if (is_simulation_visible)
            TurnOffVisibility();
        else TurnOnVisibility();
    }
    private void TurnOffVisibility()
    {
        is_simulation_visible = false;
        foreach (GameObject gameObject in game_objects)
            gameObject.SetActive(false);
        ToggleToggle(false);
    }
    private void TurnOnVisibility()
    {
        is_simulation_visible = true;
        foreach (GameObject gameObject in game_objects)
            gameObject.SetActive(true);
        ToggleToggle(true);
    }

    private void TeleportToOrigin()
    {
        Camera.main.transform.position = Vector3.zero;
    }
    private void ToggleResource()
    {

        resource_scrollView.style.display = resource_isVisible ? DisplayStyle.None : DisplayStyle.Flex;
        if (resource_isVisible)
            InvisibleMouseInteractionContainer();
        else VisibleMouseInteractionContainer();
        resource_isVisible = !resource_isVisible;
    }
    private void ToggleGui()
    {
        root.style.display = root_isVisible ? DisplayStyle.None : DisplayStyle.Flex;
        root_isVisible = !root_isVisible;
    }

    private void ToggleLerpMode()
    {
        lerp_factor_textField.style.display = lerp_mode ? DisplayStyle.None : DisplayStyle.Flex;
        apply_lerp_factor_textField.style.display = lerp_mode ? DisplayStyle.None : DisplayStyle.Flex;
        UpdateOriginalPositions();
        ChangeLerpFactor();
        lerp_mode = !lerp_mode;
    }

    private void UpdateOriginalPositions()
    {
        original_position.Clear();
        foreach (GameObject g in game_objects)
            original_position.Add(g.transform.position);
    }

    private void ApplyBindingDistance(bool bond_minimize)
    {
        try
        {
            binding_distance = Math.Abs(float.Parse(binding_distance_textField.text));
            format_binding_distance = false;
            this.bond_minimize = bond_minimize;
            CreateBonds();
            InvisibleMouseInteractionContainer();
            combinations_scrollView.Clear();
            structures_scrollView.Clear();
            analyse_bonds_button.style.display = DisplayStyle.Flex;
        }
        catch (FormatException ex)
        {
            info_label.text = "False Binding Distance Input!";
        }
        catch (StackOverflowException ex)
        {
            info_label.text = "Overflow!";
        }
    }

    private void ApplyFormatBindingDistance()
    {
        format_binding_distance = true;
        bond_minimize = false;
        CreateBonds();
        InvisibleMouseInteractionContainer();
        combinations_scrollView.Clear();
        structures_scrollView.Clear();
        analyse_bonds_button.style.display = DisplayStyle.Flex;
    }

    private void ToggleBond()
    {
        if (bond_mode)
        {
            apply_binding_distance_button.style.display = DisplayStyle.None;
            binding_distance_textField.style.display = DisplayStyle.None;
            binding_distance_button.style.display = DisplayStyle.None;
            analyse_bonds_button.style.display = DisplayStyle.None;
            minimize_button.style.display = DisplayStyle.None;
            RemoveBonds();
            TurnOnVisibility();
            InvisibleMouseInteractionContainer();
            combinations_scrollView.Clear();
            structures_scrollView.Clear();
            bond_mode = false;
        }
        else
        {
            if (proteins.Count > 0)
                binding_distance_button.style.display = DisplayStyle.Flex;
            apply_binding_distance_button.style.display = DisplayStyle.Flex;
            binding_distance_textField.style.display = DisplayStyle.Flex;
            minimize_button.style.display = DisplayStyle.Flex;
            VisibleMouseInteractionContainer();
            bond_mode = true;
        }

    }
    private void RemoveBonds()
    {
        foreach (Bond bond in bonds)
            Destroy(bond.bond);
        bonds.Clear();
    }

    private void RemoveImportBonds()
    {
        foreach (Bond bond in active_import_bonds)
            Destroy(bond.bond);
        active_import_bonds.Clear();
    }

    private void Escape()
    {
        if (data_reader != null)
            data_reader.Close();
        if (bonds_reader != null)
            bonds_reader.Close();
        Application.Quit();
    }

    private void CaptureScreenshot()
    {
        LAMMPS current_lammps = lammps[current_step];
        string screenshotPath = Application.dataPath + "/screenshot/" +
            "sc_" + screenshot_count +
            "_timestep_" + current_lammps.timestep +
            "_x_" + Math.Round(Camera.main.transform.position.x) +
            "_y_" + Math.Round(Camera.main.transform.position.y) +
            "_z_" + Math.Round(Camera.main.transform.position.z) + ".jpeg"; ;
        ScreenCapture.CaptureScreenshot(screenshotPath);
        screenshot_count++;
    }
    private void ToggleAnalysis()
    {
        analysis_mode = !analysis_mode;
        if (analysis_mode)
        {
            analysis_container.style.display = DisplayStyle.Flex;
            if (!import_bond_mode)
                BondAnalysis(active_import_bonds);
                else BondAnalysis(bonds);
        }
        else analysis_container.style.display = DisplayStyle.None;
    }
    private void ToggleJSON()
    {
        JSON_mode = !JSON_mode;
        analysis_mode = JSON_mode;
    }
    private void ProduceJSONFile()
    {
        List<int> largest = Enumerable.Repeat(0, 10).ToList();
        int counter = 0;

        foreach (var key_value_pair in same_structure_size.OrderByDescending(key_value_pair => key_value_pair.Key))
        {
            if (int.TryParse(key_value_pair.Key.ToString(), out int number))
            {
                largest[counter] = number;

                if (++counter == 10)
                    break;
            }
        }

        ResultEntry resultEntry = new ResultEntry()
        {
            timestep = lammps[current_step].timestep,
            first = largest[0],
            second = largest[1],
            third = largest[2],
            fourth = largest[3],
            fifth = largest[4],
            sixth = largest[5],
            seventh = largest[6],
            eighth = largest[7],
            nineth = largest[8],
            tenth = largest[9]
        };
        foreach (var kvp in protein_combinations)
        {
            string combination = kvp.Key;
            bool SUMO1 = false, SUMO2 = false, SUMO3 = false, PML = false, SP100 = false, DAXX = false;

            for (int i = 0; i < combination.Length; i++)
            {
                if (!char.IsDigit(combination[i])) continue;
                switch (int.Parse(combination[i].ToString()))
                {
                    case 1:
                        SUMO1 = true;
                        break;
                    case 2:
                        SUMO2 = true;
                        break;
                    case 3:
                        SUMO3 = true;
                        break;
                    case 4:
                        PML = true;
                        break;
                    case 5:
                        SP100 = true;
                        break;
                    case 6:
                        DAXX = true;
                        break;
                }
            }
            resultEntry.proteinCombination.Add(new ProteinCombinationEntry
            {
                occurrence = kvp.Value,
                SUMO1 = SUMO1,
                SUMO2 = SUMO2,
                SUMO3 = SUMO3,
                PML = PML,
                SP100 = SP100,
                DAXX = DAXX,
            });
        }
        analysisResult.results.Add(resultEntry);
    }
    private void WriteJSONFile()
    {
        File.WriteAllText(Path.Combine(Application.dataPath + "/bondanalysis/", lammps[current_step].timestep.ToString() + ".json"), JsonUtility.ToJson(analysisResult, prettyPrint: true));
    }

    [System.Serializable]
    public class ProteinCombinationEntry
    {
        public int occurrence;
        public bool SUMO1, SUMO2, SUMO3, PML, DAXX, SP100;
    }

    [System.Serializable]
    public class ResultEntry
    {
        public long timestep;
        public int first = 0, second = 0, third = 0, fourth = 0, fifth = 0, sixth = 0, seventh = 0, eighth = 0, nineth = 0, tenth = 0;
        public List<ProteinCombinationEntry> proteinCombination = new List<ProteinCombinationEntry>();
    }
    [System.Serializable]
    public class AnalysisResult
    {
        public List<ResultEntry> results = new List<ResultEntry>();
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
        public float length = 0;
        public GameObject gameObject;
        public GameObject gameObject2;
        public GameObject bond;

        public Bond(GameObject gameObject, GameObject gameObject2)
        {
            this.gameObject = gameObject;
            this.gameObject2 = gameObject2;
            this.length = Vector3.Distance(gameObject.transform.position, gameObject2.transform.position);
        }
    }
    public class ImportedBonds
    {
        public long timestep = 0;
        public ArrayList bonds = new ArrayList();
    }
    public class LAMMPS
    {
        public long timestep;
        public long numberOfAtoms;

        // box bounds represented as 3 tuples: (min, max) for each of x, y, z
        public Tuple<float, float> boxBounds_X = new Tuple<float, float>(0, 0);
        public Tuple<float, float> boxBounds_Y = new Tuple<float, float>(0, 0);
        public Tuple<float, float> boxBounds_Z = new Tuple<float, float>(0, 0);

        // atom list represented as a tuple: (ID, Type, x, y, z)
        public List<Tuple<int, int, float, float, float>> atoms = new List<Tuple<int, int, float, float, float>>();

        public Boolean readData()
        {
            try
            {

                data_reader.ReadLine(); // ITEM:TIMESTEP
                timestep = long.Parse(data_reader.ReadLine());

                data_reader.ReadLine(); //ITEM: NUMBER OF ATOMS
                numberOfAtoms = int.Parse(data_reader.ReadLine());

                data_reader.ReadLine(); //ITEM: BOX BOUNDS"  
                string[] x_split = data_reader.ReadLine().Split(" ");
                boxBounds_X = Tuple.Create(float.Parse(x_split[0], CultureInfo.InvariantCulture), float.Parse(x_split[1], CultureInfo.InvariantCulture));
                string[] y_split = data_reader.ReadLine().Split(" ");
                boxBounds_Y = Tuple.Create(float.Parse(y_split[0], CultureInfo.InvariantCulture), float.Parse(y_split[1], CultureInfo.InvariantCulture));
                string[] z_split = data_reader.ReadLine().Split(" ");
                boxBounds_Z = Tuple.Create(float.Parse(z_split[0], CultureInfo.InvariantCulture), float.Parse(z_split[1], CultureInfo.InvariantCulture));

                data_reader.ReadLine(); //ITEM: ATOMS id type xs ys zs

                for (int i = 0; i < numberOfAtoms; i++)
                {
                    string[] substrings = data_reader.ReadLine().Split(" ");
                    Tuple<int, int, float, float, float> atom = Tuple.Create(
                        int.Parse(substrings[0]),
                        int.Parse(substrings[1]),
                        float.Parse(substrings[2], CultureInfo.InvariantCulture) * (boxBounds_X.Item2 - boxBounds_X.Item1) + boxBounds_X.Item1,
                        float.Parse(substrings[3], CultureInfo.InvariantCulture) * (boxBounds_Y.Item2 - boxBounds_Y.Item1) + boxBounds_Y.Item1,
                        float.Parse(substrings[4], CultureInfo.InvariantCulture) * (boxBounds_Z.Item2 - boxBounds_Z.Item1) + boxBounds_Z.Item1);
                    atoms.Add(atom);
                }
                return true;
            }
            catch
            {
                info_label.text = "Incorrect LAMMPS Format";
                return false;
            }
        }
        /**
        * instantiate the proteins as sphere gameobjects from one timestep in the LAMMPS file
        * and sets the position by denormalizing with the BOX_BOUND factors. 
        * If a format isn't available, the attributes will be set to a default value 
        */
        public void initializeGameObjects()
        {

            if (game_objects.Count != 0)
                foreach (GameObject g in game_objects)
                    Destroy(g);
            game_objects.Clear();
            timestep_label.text = "Timestep : " + timestep.ToString();

            for (int i = 0; i < numberOfAtoms; i++)
            {
                GameObject gameObject = GameObject.CreatePrimitive(PrimitiveType.Sphere);
                gameObject.transform.position = GetCoordinates(i);

                if (proteins.Count > 0)
                {
                    Protein protein = (Protein)proteins[atoms[i].Item2 - 1]; // in Lammpstrij file it starts with 1
                    gameObject.name = protein.name;
                    gameObject.transform.localScale = new Vector3(protein.radius, protein.radius, protein.radius);
                    Renderer rend = gameObject.GetComponent<Renderer>();
                    rend.material.color = protein.hexColor;
                }
                game_objects.Add(gameObject);
            }


        }
        // gives each gameobject it's new position
        public void UpdatePosition()
        {
            timestep_label.text = "Timestep : " + timestep.ToString();
            for (int i = 0; i < game_objects.Count; i++)
                game_objects[i].transform.position = GetCoordinates(i);
        }
        public Dictionary<GameObject, int> GetProteinMap()
        {
            Dictionary<GameObject, int> protein_map = new Dictionary<GameObject, int>();
            foreach (var atom in atoms)
                protein_map[game_objects[atom.Item1 - 1]] = atom.Item2;
            return protein_map;
        }

        public Vector3 GetCoordinates(int atom_index)
        {
            return new Vector3(atoms[atom_index].Item3, atoms[atom_index].Item4, atoms[atom_index].Item5);
        }
    }
}
