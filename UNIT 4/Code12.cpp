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
    My_class object[2], *p;

    object[0].set_number(10);
    object[1].set_number(20);

    p = &object[0];
    p->show_number();
    p++;
    p->show_number();
    p--;
    p->show_number();

    return 0;
}