#include <iostream>

// Polymorphism is a fundamental concept in object-oriented programming that
// allows objects of different classes to be treated as instances of a common base class.
// There are two main types of polymorphism in C++:


// Compile-Time Polymorphism (Static Binding): Also known as Function Overloading,
// this occurs when multiple functions with the same name exist in the same scope,
// but they have different parameters. The appropriate function is determined at
// compile time based on the number and types of arguments.

void print(int value) {
    // Code to print an integer
}

void print(double value) {
    // Code to print a double
}

// Run-Time Polymorphism (Dynamic Binding): Also known as Method Overriding,
// this is achieved through virtual functions. It allows a derived class to provide
// a specific implementation of a method defined in a base class. The correct method
// is determined at runtime based on the actual type of the object.

class Animal {
public:
    virtual void makeSound() {
        // Common code for all animals
    }
};

class Dog : public Animal {
public:
    void makeSound() {
        // Specific code for a dog's sound
    }
};

class Cat : public Animal {
public:
    void makeSound() {
        // Specific code for a cat's sound
    }
};

