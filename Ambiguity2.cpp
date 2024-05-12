#include <iostream>
using namespace std;

class B
{
public:
    void say()
    {
        cout << "Hello World!!" << endl;
    }
};

class D : public B
{
public:
    void say()
    {
        cout << "Hii!!" << endl;
    }
};   // D's new say() method will override Base class's say() method.

int main()
{
    B obj;
    obj.say();

    D d;
    d.say();

    return 0;
}