#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    Complex(int, int);   // Constructor Declaration

    void printNumber()
    {
        cout << "Your number is:" << a << "+" << b << "i" << endl;
    }
};

Complex::Complex(int x, int y)  //-->This is a "Parameterized Constructor"(takes arguments).
{
    a = x;       // Constructor Definition
    b = y;
}

int main()
{
    Complex a(4, 6);         // Implicit Call
    a.printNumber();


    Complex b= Complex(88,5); // Explicit Call
    b.printNumber();
    return 0;
}
