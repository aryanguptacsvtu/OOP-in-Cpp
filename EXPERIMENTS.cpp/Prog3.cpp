// Program to swap two numbers.

#include <iostream>
using namespace std;
int main()
{
    int a, b, temp;
    cout << "Enter value of a:";
    cin >> a;
    cout << "Enter value of b:";
    cin >> b;

    temp = a;
    a = b;
    b = temp;

    cout << "Value of a after swapping:" << a << endl;
    cout << "Value of b after swapping:" << b << endl;

    return 0;
}