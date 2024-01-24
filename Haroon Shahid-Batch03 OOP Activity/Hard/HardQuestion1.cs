using System;

// Example of a struct (value type)
public struct PointStruct
{
    public int X;
    public int Y;
}

// Example of a class (reference type)
public class PointClass
{
    public int X;
    public int Y;
}

class Program
{
    static void Main()
    {
        // Value type (struct) example
        PointStruct pointStruct1 = new PointStruct { X = 1, Y = 2 };
        PointStruct pointStruct2 = pointStruct1; // Copying the value

        pointStruct2.X = 3; // Modifying only the copy

        Console.WriteLine($"Struct - Point 1: ({pointStruct1.X}, {pointStruct1.Y})");
        Console.WriteLine($"Struct - Point 2: ({pointStruct2.X}, {pointStruct2.Y})");
        Console.WriteLine();

        // Reference type (class) example
        PointClass pointClass1 = new PointClass { X = 1, Y = 2 };
        PointClass pointClass2 = pointClass1; // Copying the reference (not the actual data)

        pointClass2.X = 3; // Modifying the shared data

        Console.WriteLine($"Class - Point 1: ({pointClass1.X}, {pointClass1.Y})");
        Console.WriteLine($"Class - Point 2: ({pointClass2.X}, {pointClass2.Y})");
    }
}
