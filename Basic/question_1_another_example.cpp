Question: Difference between encapsulation and abstraction ?


Answer:

Encapsulation:
Encapsulation is about bundling data (attributes) and methods (functions) together, and restricting access to certain parts of the object. This helps in hiding the internal details and providing a clean interface for interacting with the object.


#include <iostream>
using namespace std;

class EncapsulationExample {
private:
	// we declare a as private to hide it from outside
	int a; 

public:
	// set() function to set the value of a
	void set(int x) 
	{
		a = x;
	}

	// get() function to return the value of a
	int get() 
	{
		return a;
	}
};

// main function
int main() 
{
	EncapsulationExample e1;

	e1.set(10);

	cout<<e1.get();
	return 0;
}


The concept of abstraction only shows necessary information to the users. It reduces the complexity of the program by hiding the implementation complexities of programs. 


class Sum {
private:
    // private variables
    int a, b, c; 
public:
    void sum(int x, int y)
    {
        a = x;
        b = y;
        c = a + b;
        cout<<"Sum of the two number is : "<<c<<endl;
    }
};
int main()
{
    Sum s;
    s.sum(5, 4);
    return 0;
}



