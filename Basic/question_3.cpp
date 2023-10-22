#include <iostream>

// Encapsulation hides the internal details of an object
// and exposes only what's necessary.

class BankAccount {
private:
    double balance;

public:
    void deposit(double amount) {
        balance += amount;
    }
    double getBalance() {
        return balance;
    }
};

// Abstraction simplifies complex systems by focusing on
// essential features while hiding unnecessary details.

class Area {
public:
    virtual double area(double len) = 0;  // Abstract method
};

class Pentagon : public Area {
public:
    double area(double len) {
        // code to calculate area of pentagon
        return 1;
    }
};

// Inheritance allows a new class to inherit properties
// and behaviors from an existing class.

class Animal {
public:
    void eat() {
        // Code to eat
    }
};

class Dog : public Animal {
public:
    void bark() {
        // Code to bark
    }
};

// Polymorphism allows objects of different classes to be
// treated as instances of a common base class.

class Shape {
public:
    virtual void draw() {
        // Common drawing code
    }
};

class Circle : public Shape {
public:
    void draw() {
        // Drawing a circle
    }
};

class Square : public Shape {
public:
    void draw() {
        // Drawing a square
    }
};


int main() {

    return 0;
}