// Sidra Sonia Aziz - Batch 03
// Polymorphism
// Meaning: 
// The word “poly” means 'many' and “morphs” means 'forms'.
// Polymorphism allows us to perform a single action in different ways. 
// Polymorphism in Java:
// Polymorphism is considered one of the important features of Object-Oriented Programming.
//Polymorphism allows us to perform a single action in different ways. 
// In other words, polymorphism allows you to define one interface and have multiple implementations.
// Types:
// 1) Compile-time Polymorphism (Method Overloading)
// 2) Runtime Polymorphism (Method Overriding)
// Compile-time Polymorphism
// Compile-time polymorphism occurs when multiple methods in the same class 
// have the same name but different parameter lists, types.
//  It is also known as static polymorphism. This type of polymorphism is achieved by 
// method overloading or operator overloading.Java doesn’t support the Operator Overloading.
// Example: (Method Overloading)
class Multiplication {
    static int Multiply(int a, int b)
    {
        return a * b;
        
    }
    static int Multiply(int a, int b, int c)
    {
        return a * b * c;
    }
}
class Main {
    public static void main(String[] args)
    {
        System.out.println(Multiplication.Multiply(2, 4));
        System.out.println(Multiplication.Multiply(2, 7, 3));
    }
}
// Runtime-time polymorphism
// It is also known as Dynamic Method Dispatch. It is a process in which a function call
// to the overridden method is resolved at Runtime. This type of polymorphism is achieved 
// by Method Overriding. Method overriding,, occurs when a child class has a definition
//  for one of the member functions/methods of the Parent class. 
// Example:
class Parent {
	void info()
	{
		System.out.println("Parent Info!");
	}
}
// child1 class
class child1 extends Parent {

	void info() { System.out.println("Child1 Info!"); }
}
// child2 class
class child2 extends Parent {
	void info()
	{
		System.out.println("Child2 Info!");
	}
}
// Main class
class Main {
	public static void main(String[] args)
	{
		Parent parent = new Parent();
        parent.info();
		parent = new child1();
		parent.info();

		parent = new child2();
		parent.info();
	}
}
// Real life examples:
// 1) Think about a man in our community.
// This man takes on various jobs and responsibilities.
// He can be a husband to someone, a father to his child, or 
//  work as a manager in a company, all at the same time. 
// Even though he's doing different things, he's still just one person.
// So, when the same man performs different roles like this, we call it polymorphism.
// 2) Think about a computer. A computer can be used for various tasks like
//  writing documents, browsing the internet, playing games, and more. 
// It takes on different roles based on what you need.
// Despite these diverse functions, it's still the same computer.
// This ability of a computer to perform different tasks showcases the concept of 
// polymorphism in technology.
