//Practical UseCase of Abstraction:-
//	Car is a great example of abstraction. 
//	You can start a car by turning the key or pressing the start button. 
//	You don’t need to know how the engine is getting started, what all components your car has. 
//	The car internal implementation and complex logic is completely hidden from the user.

//In this example, the Car class abstracts the internal details of the car. 
//The user can interact with the car through high-level methods like start and stop, 
//and the implementation details of the car is hidden. 

#include <iostream>
#include <string>

using namespace std;

class Car {
public:
    Car(string make, string model) : make(make), model(model) {}

    void start() {
        cout << "The car engine is started.\n"; 
    }

    void stop() {
        cout << "The car engine is stopped.\n";
    }

    void displayDetails() {
        cout << "Make: " << make << "\nModel: " << model << endl;
    }

private:
    string make;
    string model;
};

int main() {

    Car myCar("Toyota", "Camry");

    myCar.displayDetails();

    myCar.start();

    myCar.stop();

   
    return 0;
}

