#include <iostream>
using namespace std;

// Class:  In C++, a class is a blueprint or template for creating objects.
//        It defines the properties (data members) and behaviors (member functions)
//        that objects of that class will have.

class Car {
public:
    int speed;
    int start() {
        return speed;
    }
};


// Object: An object is an instance of a class. It is a concrete, self-contained
//        entity that can hold data and perform actions as defined in the class.

int main() {

    Car myCar;  // Creating an object of the Car class
    myCar.speed = 60;  // Setting the speed property
    cout << myCar.start();  // Calling the start() method

    return 0;
}