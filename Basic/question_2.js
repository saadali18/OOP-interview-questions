// In Object-Oriented Programming (OOP), a class is a blueprint for creating objects
// an object is an instance of a class.
// A class defines the properties (attributes) and behaviors (methods) that its objects will have.
// Objects are instances of classes that encapsulate data and behavior related to a specific concept or entity.

// Define a class named "Person"
class Person {
  // Constructor to initialize object properties
  constructor(name, age) {
    this.name = name;
    this.age = age;
  }

  // Method to display information about the person
  introduce() {
    console.log(`Hi, I'm ${this.name} and I am ${this.age} years old.`);
  }
}

// Create objects (instances) of the "Person" class
const person1 = new Person("Alice", 30);
const person2 = new Person("Bob", 25);

// Call the "introduce" method on the objects
person1.introduce(); // Output: Hi, I'm Alice and I am 30 years old.
person2.introduce(); // Output: Hi, I'm Bob and I am 25 years old.
