#include <iostream>
using namespace std;

class Complex
{
    double real;
    double imag;

public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i)
    {
    }

    Complex operator+(const Complex &obj)
    {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    void display() const
    {
        cout << real << "+" << imag << "i" << endl;
    }
};

int main()
{
    Complex c1(8.0, 4.0);
    Complex c2(3.0, 2.0);
    Complex c3 = c1 + c2;

    cout << "c1:";
    c1.display();
    cout << "c2:";
    c2.display();

    cout << "c3:";
    c3.display();
    return 0;
}
