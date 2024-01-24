// A virtual function is a function in a base class that is declared using the virtual keyword.
// When a derived class inherits from this base class and provides its own implementation of the virtual function, the derived class's version is called instead of the base class's version when an object of the derived class is used.
// This allows for runtime polymorphism, as the appropriate method to be called is determined at runtime.

// A pure virtual function is a virtual function that is declared in the base class but has no implementation in the base class.
// Classes containing pure virtual functions are termed abstract classes, and they cannot be instantiated. Instead, they serve as interfaces that must be implemented by any derived class.
// Any class that inherits from an abstract class with pure virtual functions must provide implementations for those functions.

// Define a "virtual" class with a "virtual" method
function Vehicle(make, model) {
  this.make = make;
  this.model = model;
}

Vehicle.prototype.start = function () {
  console.log("Generic vehicle starting");
};

// Define a "pure virtual" class that inherits from the "virtual" class
function EnginePoweredVehicle(make, model) {
  Vehicle.call(this, make, model);
  if (this.constructor === EnginePoweredVehicle) {
    throw new Error("Cannot instantiate an abstract class");
  }
}

EnginePoweredVehicle.prototype = Object.create(Vehicle.prototype);
EnginePoweredVehicle.prototype.constructor = EnginePoweredVehicle;

EnginePoweredVehicle.prototype.accelerate = function () {
  throw new Error("accelerate method must be implemented by derived classes");
};

// Create a derived class that overrides the "virtual" and "pure virtual" methods
function Car(make, model) {
  EnginePoweredVehicle.call(this, make, model);
}

Car.prototype = Object.create(EnginePoweredVehicle.prototype);
Car.prototype.constructor = Car;

Car.prototype.start = function () {
  console.log("Car starting");
};

Car.prototype.accelerate = function () {
  console.log("Car accelerating");
};

// Example usage
const genericVehicle = new Vehicle("Generic", "Model");
// const genericEnginePoweredVehicle = new EnginePoweredVehicle("Generic", "Model"); // Throws an error

const car = new Car("Toyota", "Camry");

genericVehicle.start(); // Calls the start method of the Vehicle class
// genericEnginePoweredVehicle.accelerate(); // Error: accelerate is not implemented

car.start(); // Calls the overridden start method of the Car class
car.accelerate(); // Calls the accelerate method of the Car class
