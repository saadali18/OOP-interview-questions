//Function Overloading
#include <iostream>
using namespace std;
class Sub{
public:
    int SUB(int X, int Y)    
    {
        return X - Y;    
    }

    int SUB() {  

        string a = "HELLO";
        string b = "MY NAME IS HAROON SHAHID";  
        string c =  a + b;
        cout<<c<<endl;
        
    }
};
int main(void) {

    SUBition obj;    
    cout<<obj.SUB(128, 15)<<endl; 
    obj.SUB();  
    return 0;

}

//Operator Overloading
using System;

public class Point
{
    public int X { get; set; }
    public int Y { get; set; }

    public Point(int x, int y)
    {
        X = x;
        Y = y;
    }

    // Overloading the "+" operator for adding two Point objects
    public static Point operator +(Point p1, Point p2)
    {
        return new Point(p1.X + p2.X, p1.Y + p2.Y);
    }

    public override string ToString()
    {
        return $"({X}, {Y})";
    }
}

class Program
{
    static void Main()
    {
        Point point1 = new Point(2, 3);
        Point point2 = new Point(1, 5);
        Point result = point1 + point2;

        Console.WriteLine($"Result of point addition: {result}");
    }
}

//Method Overriding
using System;

// Base class
public class Shape
{
    //overridden by derived classes
    public virtual void Draw()
    {
        Console.WriteLine("Drawing a generic shape");
    }
}

// Derived class
public class Circle : Shape
{
    public override void Draw()
    {
        Console.WriteLine("Drawing a circle");
    }
}

class Program
{
    static void Main()
    {
        Shape shape = new Shape();
        shape.Draw(); 

        Circle circle = new Circle();
        circle.Draw();  

        Shape polymorphicShape = new Circle();
        polymorphicShape.Draw();  
    }
}

