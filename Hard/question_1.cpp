#include <iostream>

// Struct (Value Type): In C++, a struct is essentially a class with the
// default access specifier set to "public." Structs are often used for data grouping,
// and they can represent value types if used to store data directly.
//
// Class (Reference Type): A class, like a struct, can represent both value types and
// reference types. It is used for more complex objects and can be used as a reference
// type when objects are managed by pointers or references.

// Struct as a value type
struct ValueStruct {
    int value;
};

// Class as a reference type
class ReferenceClass {
public:
    int value;
};

int main() {
    // Struct as a value type
    ValueStruct structObj1;
    ValueStruct structObj2;
    structObj1.value = 10;
    structObj2 = structObj1; // Copying values
    structObj2.value = 20; // Modifying a copy

    // Class as a reference type
    ReferenceClass classObj1;
    ReferenceClass classObj2;
    classObj1.value = 30;
    classObj2 = classObj1; // Copying references
    classObj2.value = 40; // Modifying the same object

    std::cout << "Struct Value: " << structObj1.value << ", " << structObj2.value << std::endl; // Outputs: 10, 20
    std::cout << "Class Reference: " << classObj1.value << ", " << classObj2.value << std::endl; // Outputs: 40, 40

    return 0;
}
