#include <iostream>
using namespace std;

void f(int *x)
{
    *x = *x - 1;
}
int main()
{
    int a = 5;

    cout << "Value of a:" << a << endl;
    f(&a);
    cout << "Value of a:" << a << endl;

    return 0;
}