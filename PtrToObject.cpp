#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
    void display()
    {
        cout << "The real part is:" << real << endl;
        cout << "The imaginary part is:" << imaginary << endl;
    }
};

int main()
{
    // Complex c1;                [VALID]
    // c1.setData(12, 34);     
    // c1.display();

    // Complex *ptr = new Complex;
    // (*ptr).setData(1,3);       [VALID]
    // (*ptr).display();

    Complex *ptr = new Complex;
    ptr->setData(12, 54);          // Using 'Arrow Operator'
    ptr->display();

    return 0;
}