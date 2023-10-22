#include <iostream>


// Inheritance is an essential concept in object-oriented programming
// where a new class (called the derived or child class) inherits properties
// and behaviors from an existing class (called the base or parent class).
// Inheritance promotes code reuse and allows you to create class hierarchies.
//
// There are several types of inheritance:
//
// Single Inheritance: A derived class inherits from only one base class.

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

// Multiple Inheritance: A derived class can inherit from multiple base classes.

class Parent1 {
public:
    void method1() {
        // Code for method 1
    }
};

class Parent2 {
public:
    void method2() {
        // Code for method 2
    }
};

class Child : public Parent1, public Parent2 {
public:
    void childMethod() {
        // Code for child method
    }
};


// Multilevel Inheritance: A class derives from another class, which, in turn, derives from another class.

class Grandparent {
public:
    void grandparentMethod() {
        // Code for grandparent method
    }
};

class Parent : public Grandparent {
public:
    void parentMethod() {
        // Code for parent method
    }
};

class Child : public Parent {
public:
    void childMethod() {
        // Code for child method
    }
};


// Hierarchical Inheritance: Multiple classes inherit from a single base class.

class Shape {
public:
    void draw() {
        // Code to draw a shape
    }
};

class Circle : public Shape {
public:
    void drawCircle() {
        // Code to draw a circle
    }
};

class Square : public Shape {
public:
    void drawSquare() {
        // Code to draw a square
    }
};

// Hybrid Inheritance: A combination of two or more types of inheritance.