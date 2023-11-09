// Four pillars of oop are :
// 1. Abstraction: The process of hiding the implementation detail from the user and shows only the functionality of the programming to the user.
//It is a concept of creating  of more modular, reusable, and maintainable code.
// It can be acheived using Abstract classes or Interface.
//abstract class(0-100% Abstraction means abtract and concrete both methods can)  
abstract class Demo {
  // Abstract method
  abstract void display();
}

class MainClass extends Demo {
  void display() {
    System.out.println("Abstract method called.");
  }

  public static void main(String[] args) {
    MainClass obj = new MainClass();
    // Invoking abstract method
    obj.display();
  }
}
//Explaination: Every subclass of Demo must provide it's own implementation of abstract methods of Demo class.
//Output: Abstract method called
//Interfece(100% Abstraction )
interface Demo {
    void greeting();
    void display();
}

// Implements the Interface (Must implement all methods of Interface)
public class MainClass implements Demo {

    void greeting() {
        System.out.println("Hey this is the Implementation of Interface class Method.");
    }

    void display() {
        System.out.println("Interface class method called.");
    }

    public static void main(String[] args) {
        MainClass obj = new MainClass();
        // Invoking abstract method
        obj.greeting();
        obj.display();
    }
}
// Output: Hey this is the Implementation of Interface class Method.
//         Interface class method called.

// 2. Encapsulation:The process of binding fields (object state) and methods (behavior) together as a single unit.In Java it is done using classes.
class Person {
    // Encapsulating the name and age only approachable and used using methods defined
    private String name;
    private int age;

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }
}
public class Main {
    public static void main(String[] args) {
        // person object created
        Person person = new Person();
        person.setName("Zummer");
        person.setAge(20);

        // Using methods to get the values from the
        // variables as the name and age are not directly accessible.
        System.out.println("Name: " + person.getName());
        System.out.println("Age: " + person.getAge());
    }
}
// Output:Name: Zummer
//        Age: 20

// 3. Inheritance:It defines parent(super class ) and child(subclass) relationship(is-a).Child class can use all public and protected members of parent class. (Multilevel and Mutliple inehritance)
// Note : Java offers interfaces as a strong substitute for the conventional multiple inheritance with classes that it does not provide. 
interface CarStart {
    void start();
}
interface CarStop {
    void stop();
}
public class Car implements CarStart, CarStop {

    public void start() {
        System.out.println("The car engine has been started.");
    }

    public void stop() {
        System.out.println("The car engine has been stopped.");
    }

    public static void main(String[] args) {
        Car c = new Car();
        c.start();
        c.stop();
    }
}
//Output :The car engine has been started.
//         The car engine has been stopped.

// 4. Polymorphism:The word “poly” means many and “morphs” means forms.It is a process of  defining  one interface and  multiple implementations.Two methods -> 
// .) Overloading: It is also known as static polymorphism or compile time polymorphism in which Functions can be overloaded by changes in the number of arguments or
// a change in the type of arguments.

// Class 1
// Helper class
class Helper {
	// Method with 2 integer parameters
	static int Multiply(int a, int b)
	{
		// Returns product of integer numbers
		return a * b;
	}
	// Method 2
	// With same name but with 2 double parameters
	static double Multiply(double a, double b)
	{
		// Returns product of double numbers
		return a * b;
	}
}
// Class 2
// Main class
class Main {
	// Main driver method
	public static void main(String[] args)
	{
		// Calling method by passing
		// input as in arguments
		System.out.println(Helper.Multiply(2, 4));
		System.out.println(Helper.Multiply(5.5, 6.3));
	}
}
// .) Overriding:In this process, an overridden method is called through the reference variable of a superclass,
// The method to be called is decided  based on the object being referred to by the reference variable.
// 1) Upcasting: If the reference variable of Parent class refers to the object of Child class.	We can perform Upcasting implicitly or explicitly.
class Parent{}  
class child extends A{}  
Parent p=new Child();//upcasting  
// 2) Downcasting:The reference of the parent class object is passed to the child class.
//	Implicitly Downcasting is not possible.
Parent p = new Child()
Child c = (Child)p;