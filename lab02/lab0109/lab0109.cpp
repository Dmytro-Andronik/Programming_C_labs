using System;

interface ILamp
{
    void PrintDetails();
    void ChangePower(int newPower);
}


interface ICamera
{
    void PrintDetails();
    void ChangeLensSensitivity(int newSensitivity);
}


class PhotoStudio : ILamp, ICamera
{
    private string lampType;
    private string lampManufacturer;
    private int lampPower;
    private int lampLightElements;
    private string cameraType;
    private string cameraManufacturer;
    private int cameraLensSensitivity;

    public PhotoStudio(string lampType, string lampManufacturer, int lampPower, int lampLightElements,
                       string cameraType, string cameraManufacturer, int cameraLensSensitivity)
    {
        this.lampType = lampType;
        this.lampManufacturer = lampManufacturer;
        this.lampPower = lampPower;
        this.lampLightElements = lampLightElements;
        this.cameraType = cameraType;
        this.cameraManufacturer = cameraManufacturer;
        this.cameraLensSensitivity = cameraLensSensitivity;
    }

    public void PrintDetails()
    {
        Console.WriteLine("Lamp details:");
        Console.WriteLine("Type: " + lampType);
        Console.WriteLine("Manufacturer: " + lampManufacturer);
        Console.WriteLine("Power (lumens): " + lampPower);
        Console.WriteLine("Light elements: " + lampLightElements);

        Console.WriteLine("Camera details:");
        Console.WriteLine("Type: " + cameraType);
        Console.WriteLine("Manufacturer: " + cameraManufacturer);
        Console.WriteLine("Lens sensitivity: " + cameraLensSensitivity);
    }

    public void ChangePower(int newPower)
    {
        lampPower = newPower;
    }

    public void ChangeLensSensitivity(int newSensitivity)
    {
        cameraLensSensitivity = newSensitivity;
    }
}

class Program
{
    static void Main(string[] args)
    {
      
        PhotoStudio studio1 = new PhotoStudio("LED", "XYZ Company", 1000, 4, "DSLR", "ABC Corporation", 200);
        PhotoStudio studio2 = new PhotoStudio("Halogen", "123 Manufacturer", 800, 3, "Mirrorless", "DEF Inc.", 400);

        
        studio1.PrintDetails();
        Console.WriteLine(); 
        studio2.PrintDetails();
        Console.WriteLine(); 
    }
}
