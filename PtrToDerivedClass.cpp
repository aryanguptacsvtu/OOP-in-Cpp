#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base;
    void display()
    {
        cout << "1. Displaying Base Class variable,var_base:" << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display()
    {

        cout << "a. Displaying Base Class variable,var_base:" << var_base << endl;
        cout << "a. Displaying Derived Class variable,var_derived:" << var_derived << endl;
    }
};

int main()
{
    BaseClass *base_class_ptr;
    BaseClass obj_base;

    DerivedClass *derived_class_ptr;
    DerivedClass obj_derived;

    base_class_ptr = &obj_derived;   // Pointing Base class pointer to Derived class object.

    base_class_ptr->var_base = 100;
    base_class_ptr->display();
    cout << endl;
    // base_class_ptr->var_derived = 1000;  --> Throws an Error

    derived_class_ptr = &obj_derived;
    derived_class_ptr->var_derived = 55;
    derived_class_ptr->var_base = 88;
    derived_class_ptr->display();

    return 0;
}