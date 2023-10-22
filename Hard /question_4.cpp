#include <iostream>

// Virtual Function in C++:
//
// A virtual function is a member function in a base class that is declared using the virtual keyword.
// It allows the function to be overridden in derived classes, enabling runtime polymorphism.
// Virtual functions are used when you want the function called to be determined based on the
// actual object type (dynamic binding).

// Pure Virtual Function in C++:
//
// A pure virtual function is a virtual function that is declared in the base class without
// providing an implementation.
// It is defined with = 0 at the end of the function declaration.
// Classes containing pure virtual functions are considered abstract, and you cannot
// create instances of them.

class Shape {
public:
    virtual void displayArea() {
        std::cout << "Area of a generic shape" << std::endl;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    // Override the virtual function
    void displayArea() override {
        double area = 3.141 * radius * radius;
        std::cout << "Area of the circle: " << area << std::endl;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    // Override the virtual function
    void displayArea() override {
        double area = length * width;
        std::cout << "Area of the rectangle: " << area << std::endl;
    }
};

class AbstractShape {
public:
    virtual void displayArea() = 0; // Pure virtual function
};

int main() {
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);

    // Virtual function example
    Shape* shapePtr;
    shapePtr = &circle;
    shapePtr->displayArea(); // Calls the Circle's displayArea()

    shapePtr = &rectangle;
    shapePtr->displayArea(); // Calls the Rectangle's displayArea()

    // Pure virtual function example
    AbstractShape* abstractShapePtr; // Cannot create an instance of an abstract class
    // abstractShapePtr = new AbstractShape; // This is not allowed
    return 0;
}
