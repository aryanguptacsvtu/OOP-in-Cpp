#include <iostream>
using namespace std;

class Parent1
{
public:
    Parent1()
    {
        cout << "Inside first base class." << endl;
    }
};

class Parent2
{
public:
    Parent2()
    {
        cout << "Inside second base class." << endl;
    }
};

class Child : public Parent1, public Parent2
{
public:
    Child()
    {
        cout << "Inside child class." << endl;
    }
};

int main()
{
    Child obj1;

    return 0;
}