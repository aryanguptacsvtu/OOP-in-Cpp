#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(void);   // Constructor Declaration

    void printNumber()
    {
        cout << "Your number is:" << a << "+" << b << "i" << endl;
    }
};

Complex::Complex(void)  //--> This is a "Default Constructor"(takes no arguments).
{
    a = 10;         // Constructor Definition
    b = 20;
}

int main()
{
    Complex c1, c2;

    c1.printNumber();
    c2.printNumber();
    return 0;
}

/*
->"Constructor" should be declared in the 'public' section of class.
-> They are automatically invoked whenever object is created.
-> They can't return values & don't have return types.
*/