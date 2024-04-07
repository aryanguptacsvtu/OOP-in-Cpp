#include <iostream>
using namespace std;

// Forward Declaration
class Complex;

class Calculator
{
public:
    int sumRealComplex(Complex, Complex);   // Only Declaratiion.
    int sumImagComplex(Complex, Complex);
};

class Complex
{
    int a, b;

    // Individually declaring functions as friends:-
    // friend int Calculator :: sumRealComplex(Complex,Complex);
    // friend int Calculator :: sumImagComplex(Complex,Complex);

    // Declaring the entire Calculator class as friend:-
    friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "Your number is:" << a << "+" << b << "i" << endl;
    }
};

int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int Calculator ::sumImagComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex o1, o2;

    o1.setNumber(1, 3);
    o2.setNumber(5, 6);

    Calculator calc;
    int result = calc.sumRealComplex(o1, o2);
    cout << "The sum of 'Real' part of o1 & o2 is: " << result << endl;

    int result2 = calc.sumImagComplex(o1, o2);
    cout << "The sum of 'Imaginary' part of o1 & o2 is: " << result2 << endl;

    return 0;
}
