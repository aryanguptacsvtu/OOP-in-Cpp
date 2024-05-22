#include <iostream>
using namespace std;

template <class T1, class T2>

class myClass
{
public:
    T1 data1;
    T2 data2;
    myClass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << "Output:-" << endl;
        cout << data1 << endl << this->data2 << endl;
    }
};

int main()
{
    myClass<char, float> obj('x', 1.2);
    obj.display();

    myClass<int, float> obj2(10, 8.3);
    obj2.display();
    return 0;
}

/* Class 'Template' with 'Multiple Parameters':-

    template <class T1 , class T2...>
    class class_name
    {
        ---CODE---
    };
*/