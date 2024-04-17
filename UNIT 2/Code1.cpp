// Using Reference Variables.

#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int &ref = x;

    cout << "x =" << x << endl;
    cout << "ref =" << ref << endl;

    ref = 20;
    cout << "x =" << x << endl;
    cout << "ref =" << ref << endl;
    return 0;
}
