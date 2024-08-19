#include <iostream>
using namespace std;
class A
{
public:
    virtual void display()
    {
        cout << "Base class is invoked." << endl;
    }
};
class B : public A
{
public:
    void dispay()
    {
        cout << "Derived class is invoked." << endl;
    }
};

int main()
{
    A *a;
    B b;
    a = &b;
    a->display();

    return 0;
}