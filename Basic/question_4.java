/*Inheritance is a fundamental concept in object-oriented programming (OOP) that allows a 
class (subclass or derived class) to inherit properties and behaviors (fields and methods) 
from another class (superclass or base class). Inheritance promotes code reuse and establishes
 a hierarchy among classes.*/
 
// Java Supports 4 types of inheritance.

// Single Heritance:
// In single inheritance, a class inherits from only one superclass.
class Animal {
    void eat() {
        System.out.println("Animal is eating");
    }
}

class Dog extends Animal {
    void bark() {
        System.out.println("Dog is barking");
    }
}

// Multilevel Inheritance:
// In multilevel inheritance, a class extends another class, and then another class extends the second class.
class Animal {
    void eat() {
        System.out.println("Animal is eating");
    }
}

class Dog extends Animal {
    void bark() {
        System.out.println("Dog is barking");
    }
}

class GermanShepherd extends Dog {
    void guard() {
        System.out.println("German Shepherd is guarding");
    }
}

// Hierarchical Inheritance:
// In hierarchical inheritance, multiple classes inherit from a single superclass.
class Animal {
    void eat() {
        System.out.println("Animal is eating");
    }
}

class Dog extends Animal {
    void bark() {
        System.out.println("Dog is barking");
    }
}

class Cat extends Animal {
    void meow() {
        System.out.println("Cat is meowing");
    }
}

// Hybrid Inheritance:
// Hybrid inheritance is a combination of two or more types of inheritance (e.g., combining single, multilevel, or hierarchical).
class Animal {
    void eat() {
        System.out.println("Animal is eating");
    }
}

interface Pet {
    void play();
}

class Dog extends Animal implements Pet {
    void bark() {
        System.out.println("Dog is barking");
    }

    @Override
    public void play() {
        System.out.println("Dog is playing");
    }
}

// Multiple Inheritance (Through Interfaces):

// While Java does not support multiple inheritance of classes, it does support multiple inheritance through interfaces.
// An interface in Java is a collection of abstract methods. A class can implement multiple interfaces.
// For example:

interface Walkable {
    void walk();
}

interface Swimmable {
    void swim();
}

class Amphibian implements Walkable, Swimmable {
    // Implementing both Walkable and Swimmable interfaces
    public void walk() {
        // Walk implementation
    }

    public void swim() {
        // Swim implementation
    }
}
