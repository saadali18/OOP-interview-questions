#include <iostream>

// Operator overloading is a feature in C++ that allows you to define new behaviors
// for built-in operators when used with user-defined data types or classes.
// It enables you to make operators work with objects of your own classes.

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(double r, double i) : real(r), imaginary(i) {}

    Complex operator+(const Complex& other) {
        // Overloading the + operator
        double sumReal = real + other.real;
        double sumImaginary = imaginary + other.imaginary;
        return Complex(sumReal, sumImaginary);
    }

    void display() {
        std::cout << real << " + " << imaginary << "i" << std::endl;
    }
};

int main() {
    Complex num1(2.0, 3.0);
    Complex num2(1.5, 2.5);

    Complex sum = num1 + num2; // Calls the overloaded + operator

    std::cout << "Sum: ";
    sum.display();

    return 0;
}
