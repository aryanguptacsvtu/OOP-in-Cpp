#include <iostream>
using namespace std;

class My_class
{
    int num;

public:
    void set_number(int value)
    {
        num = value;
    }

    void show_number();
};

void My_class ::show_number()
{
    cout << "Value:" << num << endl;
}

int main()
{
    My_class object, *p;

    object.set_number(1);
    object.show_number();

    p = &object;
    p->show_number();
    return 0;
}