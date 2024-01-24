#include<iostream>
using namespace std;
//Diamond Problem in C++ Programming
class A
{
public:
    void display()
        {
            cout<<"Display Method in A ";
        }
};
class B:virtual public A
{
    public:
    void show()
        {
            cout<<"Show Method in B ";
        }
};
class C:virtual public A
{

};
class D:public B,public C
{

};
int main()
{
    D o;
    o.display();

    return 0;
}


