// Association:
// Association is a relationship between two classes where one class refers to another,
// but there is no ownership or containment involved.

// Class representing a Person
class Person(val name: String)

// Class representing a Car associated with a Person
class Car(val owner: Person) {
    // Method to start the engine with a message mentioning the owner's name
    fun startEngine() {
        println("Engine started by ${owner.name}")
    }
}

fun main() {
    // Creating a Person named John
    val person = Person("John")

    // Creating a Car associated with the Person
    val car = Car(person)

    // Starting the car's engine
    car.startEngine()
}

// Composition:
// Composition is a stronger form of association where one class contains another class, and the contained 
// class cannot exist independently of the container class. It implies a strong ownership relationship.

// Class representing an Engine
class Engine {
    // Method to start the engine
    fun start() {
        println("Engine started")
    }
}

// Class representing a Car composed of an Engine
class Car(private val engine: Engine) {
    // Method to start the car's engine by invoking the Engine's start method
    fun startEngine() {
        engine.start()
    }
}

fun main() {
    // Creating an Engine
    val engine = Engine()

    // Creating a Car composed of the Engine
    val car = Car(engine)

    // Starting the car's engine
    car.startEngine()
}
