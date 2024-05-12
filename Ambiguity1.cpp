#include <iostream>
using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "How are you?" << endl;
    }
};
class Base2
{
public:
    void greet()
    {
        cout << "Good Morning!!" << endl;
    }
};

class Derived : public Base1 , public Base2
{
    int a;
    public:
        void greet()
        {
            Base2::greet();     // Resolving Ambiguity
        }
};
int main()
{
    Base1 obj1;
    Base2 obj2;
    obj1.greet();
    obj2.greet();

    Derived d;
    d.greet();
    return 0;
}