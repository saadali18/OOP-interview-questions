#include <iostream>


// Functional Programming (FP):
//
// FP focuses on using functions as first-class citizens, immutability, and pure functions.
// It avoids shared mutable state and often relies on recursion.

// Object-Oriented Programming (OOP):
//
// OOP structures code around objects, encapsulating data and behavior.
// It supports features like inheritance, polymorphism, and mutable state.

// Reasons to Prefer OOP:
// OOP is suitable for modeling real-world entities and relationships.
// It promotes code reuse through inheritance and polymorphism.
// OOP aligns with team collaboration and is often used for large-scale applications.



// Class definition
class Circle {
private:
    double radius;

public:
    // Constructor
    Circle(double r) : radius(r) {}

    // Method to calculate the area
    double calculateArea() {
        return 3.14 * radius * radius;
    }
};

int main() {
    // Create an instance of the Circle class
    Circle myCircle(5.0);

    // Call the method to calculate the area
    double area = myCircle.calculateArea();

    // Display the result
    std::cout << "The area of the circle is: " << area << std::endl;

    return 0;
}
