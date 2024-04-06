#include <iostream>
using namespace std;

class Employee
{
private:
    int x, y, z;

public:
    int d, e;

    void setData(int a1, int b1, int c1);    // Only Declaration.

    void getData()
    {
        cout << "The value of x is:" << x << endl;
        cout << "The value of y is:" << y << endl;
        cout << "The value of z is:" << z << endl;
        cout << "The value of d is:" << d << endl;
        cout << "The value of e is:" << e << endl;
    }
};

void Employee ::setData(int a1, int b1, int c1)
{
    x = a1;
    y = b1;
    z = c1;
}

int main()
{
    Employee harry;
    harry.d = 21;
    harry.e = 56;
    // (harry.x =35;) will give error as "x" is private.

    harry.setData(1, 2, 41);
    harry.getData();

    return 0;
}
