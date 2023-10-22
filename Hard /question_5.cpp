#include <iostream>


// In C++, there is no direct equivalent to interfaces as in Java or C#.
// However, you can achieve a similar concept using abstract classes with pure
// virtual functions, as shown in the previous example. An "interface" in C++
// is essentially an abstract class with only pure virtual functions, which enforces
// that derived classes implement these functions.

// Abstract class acting as an "interface"
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
        shape->draw(); // Calls the appropriate draw() method
    }

    return 0;
}
