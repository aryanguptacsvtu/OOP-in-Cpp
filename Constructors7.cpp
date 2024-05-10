#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }
    Number(int num)
    {
        a = num;
    }

    Number(Number &obj)
    {
        cout << "Copy Constructor Called!!" << endl;
        a = obj.a;
    }
    void display()
    {
        cout << "The number for this object is:" << a << endl;
    }
};

int main()
{
    Number x, y, z(88);
    Number z2;

    x.display();
    y.display();
    z.display();
    cout << endl;

    Number z1(z);      // Copy Constructor invoked.
    z1.display();
    cout << endl;

    z2 = z;            // Copy Constructor not called.
    z2.display();
    cout << endl;

    Number z3 = z;     // Copy Constructor invoked.
    z3.display();

    return 0;
}

// NOTE:-
// When no Copy Constructor is found, Compiler supplies its own copy constructor.
