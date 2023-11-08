#include <iostream>

// The "Diamond Problem" is a complication that arises in object-oriented programming
// when multiple inheritance is used. It occurs when a class inherits from two classes
// that have a common base class, creating ambiguity in the inheritance hierarchy.
// This ambiguity arises because the derived class inherits the same base class through
// two different paths.

// Solution: Make it a virtual function


class Animal {
public:
    void speak() {
        std::cout << "Animal speaks" << std::endl;
    }
};

class Mammal : public Animal {};

class Bird : public Animal {};

class Bat : public Mammal, public Bird {};

int main() {
    Bat bat;
    bat.speak(); // Error: Ambiguity - which 'speak' method to call?

    return 0;
}
