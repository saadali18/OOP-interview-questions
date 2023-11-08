#include <iostream>

// You can access the private members of a class outside the class
// by using a friend function. A friend function is a function
// that is not a member of the class but is granted access to its private members.

class MyClass {
private:
    int privateVar;

public:
    MyClass(int val) : privateVar(val) {}

    // Declare the friend function
    friend void accessPrivateMember(MyClass& obj);
};

// Define the friend function
void accessPrivateMember(MyClass& obj) {
    // The friend function can access private members of MyClass
    std::cout << "PrivateVar from friend function: " << obj.privateVar << std::endl;
}

int main() {
    MyClass myObj(42);

    // Call the friend function to access the private member
    accessPrivateMember(myObj);

    return 0;
}
