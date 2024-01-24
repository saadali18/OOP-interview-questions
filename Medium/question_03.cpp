//Early Binding:
//
//Also known as static binding or compile-time binding.
//The decision about which method to call is made at compile time.
//In early binding, the compiler knows at compile time which function to call based on the type 
//of the object.

/*
#include <iostream>
using namespace std;

class Base {
public:
    void display() {
        cout << "Base class display\n";
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "Derived class display\n";
    }
};

int main() {
    Base obj1;
    Derived obj2;

    Base* ptr1 = &obj1;
    Base* ptr2 = &obj2;

    ptr1->display();  //Output:Base Class Display
    ptr2->display();  //Output:Base Class Display

    return 0;
}
*/

//-----------------------------------------------------------
//Late Binding:
//Also known as dynamic binding or runtime binding.
//The decision about which method to call is made at runtime.
//Late binding is achieved through the use of virtual functions and is often associated with
//base and derived classes.
/*
#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "Base class display\n";
    }
};

class Derived : public Base {
public:
    void display() override {
        cout << "Derived class display\n";
    }
};

int main() {
    Base obj1;
    Derived obj2;

    Base* ptr1 = &obj1;
    Base* ptr2 = &obj2;

    ptr1->display();  // Output: Base class display
    ptr2->display();  // Output: Derived class display

    return 0;
}

*/