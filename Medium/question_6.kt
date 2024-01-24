
//Abstraction: 
//Abstraction is the process of simplifying complex systems 
//by focusing on essential properties and behaviors while ignoring unnecessary details, 
//allowing for the creation of generalized models or interfaces in programming.

//Encapsulation:
//Encapsulation is the bundling of data and methods that operate on that data into a single unit, 
//typically a class in object-oriented programming, and restricting direct access to the internal 
//details of the object.


// Abstract class representing a Shape

abstract class Shape {
    // Encapsulated property
    private var color: String = ""

    // Abstract method to calculate area
    abstract fun calculateArea(): Double

    // Method to set the color of the shape
    fun setColor(color: String) {
        this.color = color
    }

    // Method to get the color of the shape
    fun getColor(): String {
        return color
    }
}

// Concrete class representing a Circle
class Circle(private val radius: Double) : Shape() {
    override fun calculateArea(): Double {
        return Math.PI * radius * radius
    }
}

fun main() {
    val circle = Circle(5.0)
    circle.setColor("Red")
    println("Circle color: ${circle.getColor()}")
    println("Circle area: ${circle.calculateArea()}")
}
