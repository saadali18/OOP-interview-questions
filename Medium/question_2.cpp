#include <iostream>

// Early binding (Static binding): It refers to the resolution of function calls at compile time.
// The function to be called is determined during compilation based on the function's name and the
// argument types, typically when no virtual keyword is used.
//
// Late binding (Dynamic binding): In C++, it refers to the resolution of function calls at runtime.
// This occurs when the function call involves a base class pointer or reference to an object of a
// derived class, and the function is declared as virtual in the base class. The actual function to
// be called is determined at runtime based on the object's type.

class Base {
public:
    void show() {
        std::cout << "Base class show() called" << std::endl;
    }
};

class Derived : public Base {
public:
    void show() {
        std::cout << "Derived class show() called" << std::endl;
    }
};

int main() {
    Base* basePtr;
    Derived derivedObj;

    basePtr = &derivedObj; // Point to the derived object using a base class pointer

    // Early binding (static binding) - Resolves at compile time
    basePtr->show(); // Calls Base class show() because the type is known at compile time

    // Late binding (dynamic binding) - Resolves at runtime due to the 'virtual' keyword
    Derived* derivedPtr = &derivedObj;
    derivedPtr->show(); // Calls Derived class show() because of virtual function

    return 0;
}
