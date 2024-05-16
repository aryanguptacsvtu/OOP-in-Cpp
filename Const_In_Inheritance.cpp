#include <iostream>
using namespace std;

class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 class Constructor called." << endl;
    }
    void printDataBase1()
    {
        cout << "The value of data1 is:" << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 class Constructor called." << endl;
    }
    void printDataBase2()
    {
        cout << "The value of data2 is:" << data2 << endl;
    }
};

class Derived : public Base1, public Base2
{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base2(b), Base1(a)   
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived class Constructor called." << endl;
    }
    void printDataDerived()
    {
        cout << "The value of derived1 is:" << derived1 << endl;
        cout << "The value of derived2 is:" << derived2 << endl;
    }
};

int main()
{
    Derived harry(1, 2, 3, 4);

    harry.printDataBase1();        // "Order of Execution":-
    cout << endl;                  // Base1 class Constructor
    harry.printDataBase2();        // Base2 class Constructor
    cout << endl;                  // Derived class Constructor

    harry.printDataDerived();

    return 0;
}


/* "Special Syntax" for passing arguments to multiple base classes:-

    Derived_Constructor(arg1,arg2...) : Base1_Constr(arg1,arg2), Base2_Constr(arg3,arg4)
    {
        ---Code---
    }

*/