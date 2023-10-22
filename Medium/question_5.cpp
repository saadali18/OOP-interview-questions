#include <iostream>

// Public: Members declared as public are accessible from any part of the program.
//
// Private: Members declared as private are only accessible within the class.
//
// Protected: Members declared as protected are accessible within the class and by its derived classes.

class MyClass {
public:
    int publicVar; // Accessible from anywhere
private:
    int privateVar; // Accessible only within MyClass
protected:
    int protectedVar; // Accessible within MyClass and derived classes
};

class DerivedClass : public MyClass {
    // 'publicVar' and 'protectedVar' are accessible here
    // 'privateVar' is not accessible here
};

int main() {
    MyClass obj;
    obj.publicVar = 10; // Accessible
    obj.privateVar = 20; // Not accessible
    obj.protectedVar = 30; // Not accessible

    DerivedClass derivedObj;
    derivedObj.publicVar = 40; // Accessible
    derivedObj.protectedVar = 50; // Accessible
    derivedObj.privateVar = 60; // Not accessible

    return 0;
}
