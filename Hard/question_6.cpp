#include <iostream>

// One practical use case for abstraction is modeling different shapes in a drawing application.
// You can create an abstract base class Shape with a pure virtual function draw() to ensure
// that all shapes have a method for drawing themselves. Derived classes for specific
// shapes can implement the draw() function in their own way.

// Abstract base class with pure virtual function
class Shape {
public:
    virtual void draw() = 0; // Pure virtual function
};

class Circle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a circle" << std::endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a square" << std::endl;
    }
};

int main() {
    Circle circle;
    Square square;

    Shape* shapes[] = {&circle, &square};

    for (Shape* shape : shapes) {
        shape->draw(); // Calls the appropriate draw() method for each shape
    }

    return 0;
}
