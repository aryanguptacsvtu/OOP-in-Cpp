#include <iostream>
using namespace std;

class A
{
protected:
    int a;

public:
    void setA()
    {
        cout << "Enter value of A:";
        cin >> a;
    }

    void dispA()
    {
        cout << "Value of A:" << a << endl;
    }
};

class B : public A
{
    int b, p;

public:
    void setB()
    {
        setA();
        cout << "Enter value of B:";
        cin >> b;
    }

    void dispB()
    {
        dispA();
        cout << "Value of B:" << b << endl;
    }

    void product()
    {
        p = a * b;
        cout << "Product of " << a << " & " << b << " is:" << p << endl;
    }
};

int main()
{
    B obj;
    obj.setB();
    obj.dispB();
    obj.product();

    return 0;
}