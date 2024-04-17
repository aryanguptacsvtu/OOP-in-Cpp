#include <iostream>
using namespace std;

class Simple
{
    int data1;
    int data2;

public:
    Simple(int a, int b = 5)  // Constructors with 'Default arguments'
    {
        data1 = a;
        data2 = b;
    }
    void printData();
};
void Simple::printData()
{
    cout << "The value of data1 & data2 is:" << data1 << "," << data2 << endl;
}

int main()
{
    Simple s1(12, 32);
    s1.printData();

    Simple s2(88);
    s2.printData();
    return 0;
}
