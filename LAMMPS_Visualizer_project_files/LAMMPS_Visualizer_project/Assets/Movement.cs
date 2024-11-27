using UnityEngine;


public class Movement : MonoBehaviour
{
    private float mainSpeed = 100.0f; // regular speed
    private float shiftAdd = 1000.0f;  // running
    private float camSens = 0.25f; // mouse sensitivity
    private Vector3 lastMouse = new Vector3(255, 255, 255); // initial guess
    private Vector3 deltaMouse;
    private Vector3 pivotPosition = Vector3.zero;
    public bool isLocked = false; // it is public to access it while the change of user interface happens in the singleton file
    private bool isReleased = false;
    private bool isRotating = false;
    private bool stoppedRotating = false;

    void Update()
    {
        // rotation
        if (Input.GetKey(KeyCode.LeftControl))
        {
            if (Input.GetMouseButtonDown(0))
                lastMouse = Input.mousePosition;
            if (Input.GetMouseButtonUp(0))
            {
                deltaMouse = Input.mousePosition - lastMouse;
                lastMouse = new Vector3(
                    transform.eulerAngles.x + (-deltaMouse.y * camSens),
                    transform.eulerAngles.y + (deltaMouse.x * camSens),
                    transform.eulerAngles.z);
                isRotating = true;
                isLocked = true;
                isReleased = true;
            }
            if (isRotating)
                transform.RotateAround(pivotPosition, lastMouse, 50f * Time.deltaTime);
            stoppedRotating = false;
        }
        if (Input.GetKeyUp(KeyCode.LeftControl))
        {
            isRotating = false;
            isLocked = false;
            isReleased = true;
            stoppedRotating = true;
        }

        // right click -> Input.GetMouseButtonDown(1) & left click -> Input.GetMouseButtonDown(0)
        if (Input.GetMouseButtonDown(1)) 
            toggleLock();

        if (!isLocked && !isRotating)
        {
            deltaMouse = Input.mousePosition - lastMouse;

            if (stoppedRotating) 
                lastMouse = new Vector3(
                    transform.eulerAngles.x + (-deltaMouse.y * camSens), 
                    transform.eulerAngles.y + (deltaMouse.x * camSens),
                    transform.eulerAngles.z);
            else lastMouse = new Vector3(
                transform.eulerAngles.x + (-deltaMouse.y * camSens), 
                transform.eulerAngles.y + (deltaMouse.x * camSens), 
                0);

            // isReleased behaviour to compensate mouse movement during locked times
            if (!isReleased) 
                transform.eulerAngles = lastMouse;
            else isReleased = false;

            lastMouse = Input.mousePosition;

            Vector3 velocity = Vector3.zero;

            if (Input.GetKey(KeyCode.W)) 
                velocity += new Vector3(0,0,1);
            if (Input.GetKey(KeyCode.S)) 
                velocity += new Vector3(0,0,-1);
            if (Input.GetKey(KeyCode.A)) 
                velocity += new Vector3(-1,0,0);
            if (Input.GetKey(KeyCode.D)) 
                velocity += new Vector3(1,0,0);

            if (velocity.sqrMagnitude > 0)
            { 
                if (Input.GetKey(KeyCode.LeftShift)) 
                    velocity *= shiftAdd;
                else velocity *= mainSpeed;
                velocity *= Time.deltaTime;
                transform.Translate(velocity);
            }

            // zoom
            float ScrollWheelChange = Input.GetAxis("Mouse ScrollWheel");
            if (ScrollWheelChange != 0) 
                Camera.main.transform.position += Camera.main.transform.forward * ScrollWheelChange * 1000;           
        }

    }


    private void toggleLock()
    {
        isLocked = !isLocked;
        if (isLocked) isReleased = true;
    }
}