#include <iostream>
using namespace std;

class base
{
public:
    void func1()
    {
        cout << "base 1" << endl;
    }
    virtual void func2()
    {
        cout << "base 2" << endl;
    }
    virtual void func3()
    {
        cout << "base 3" << endl;
    }
    virtual void func4()
    {
        cout << "base 4" << endl;
    }
};

class derived : public base
{
public:
    void func1()
    {
        cout << "derived 1" << endl;
    }
    void func2()
    {
        cout << "derived 2" << endl;
    }
    void func4()
    {
        cout << "derived 4" << endl;
    }
};

int main()
{
    base *p;
    derived obj1;

    p = &obj1;

    p->func1();
    p->func2();
    p->func3();
    p->func4();
    return 0;
}