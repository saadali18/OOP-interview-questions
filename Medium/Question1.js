// Explain Polymorphism with types?
// polymorphism means a same function with diffrent signatures is called many times.
// Types:
// Static Binding:Static binding is all about making this link between a function call and its definition while the program is being prepared, usually before it starts running. This is why it’s also called Compile time binding or Early Binding.you can think of it as putting labels on things beforehand. You can match things up quickly if you know what the labels on the items say.

// Some of the advantages of using the Static Binding are as follows:
// Static binding is faster than dynamic binding. The program runs faster because the computer is already aware of all the methods in a class. This also implies that the computer will not require additional time to make sense of things while running the program.
// Programs run more quickly and efficiently because they are faster.
 class MathOperations 
{
  // Method overloading
  add(a, b) 
  {
    return a + b;
  }

  addThree(a, b, c) 
  {
    return a + b + c;
  }
}

const mathOps = new MathOperations(); // object creation.

console.log(mathOps.add(2, 3));        // Outputs 5
console.log(mathOps.addThree(2, 3, 4));  // Outputs 9

// Dynamic Binding:When the connection between a function call and its definition happens while the program is running, this is called Dynamic Binding.
// At compile time or during the preparation of our program, the computer sometimes cannot understand all the information in a function call. Instead, it sorts things out while the program is actually running. This kind of linking is known as dynamic binding.

// Some of the advantages of using dynamic binding are given here.
// The fact that the same function can handle a variety of objects gives it a lot of flexibility.
// It can help make programs smaller and easier to understand. 
class Animal 
{
  makeSound() 
  {
    return 'Generic animal sound';
  }
}

class Dog extends Animal 
{
  // Method overriding
  makeSound() 
  {
    return 'Woof! Woof!';
  }
}

class Cat extends Animal 
{
  // Method overriding
  makeSound() 
  {
    return 'Meow!';
  }
}

const dog = new Dog(); // object creation.
const cat = new Cat(); // object creation.

console.log(dog.makeSound());  // Outputs "Woof! Woof!"
console.log(cat.makeSound());  // Outputs "Meow!"

