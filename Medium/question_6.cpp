#include <iostream>

// Abstraction: Abstraction is the process of simplifying complex reality by modeling classes
// based on the essential properties and behaviors. It focuses on what an object does, rather
// than how it does it. Abstraction hides the underlying complexity.
//
// Encapsulation: Encapsulation is the bundling of data (attributes) and methods (functions) that
// operate on the data into a single unit, i.e., a class. It restricts direct access to some of an
// object's components, providing control and security.

class AbstractionExample {
public:
    // Abstraction: The "what" - defining the essential behavior
    void performTask() {
        // Code to perform a task (implementation details are hidden)
    }
};

class EncapsulationExample {
private:
    int data; // Encapsulation: Data is hidden from direct access

public:
    // Encapsulation: The "how" - methods control access to data
    void setData(int value) {
        data = value; // Safely setting the data
    }

    int getData() {
        return data; // Safely retrieving the data
    }
};
