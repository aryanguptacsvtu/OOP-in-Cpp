// ** MULTIPLE INHERITANCE **

#include <iostream>
using namespace std;

class Base1
{
protected:
    int base1_int;

public:
    void set_base1_int(int a)
    {
        base1_int = a;
    }
};

class Base2
{
protected:
    int base2_int;

public:
    void set_base2_int(int a)
    {
        base2_int = a;
    }
};

class Base3
{
protected:
    int base3_int;

public:
    void set_base3_int(int a)
    {
        base3_int = a;
    }
};

class Derived : public Base1, public Base2, public Base3
{
public:
    void show()
    {
        cout << "The value of Base1 is:" << base1_int << endl;
        cout << "The value of Base2 is:" << base2_int << endl;
        cout << "The value of Base3 is:" << base3_int << endl;
        cout << "The sum of values is:" << base1_int + base2_int + base2_int << endl;
    }
};

int main()
{
    Derived harry;
    harry.set_base1_int(10);
    harry.set_base2_int(35);
    harry.set_base3_int(20);
    harry.show();

    return 0;
}

/* "Syntax for Multiple Inheritance":-
    class {{Derived_class_name}} : visibility-mode Base1 , visibility-mode Base2
    {
        Statements
    };
*/