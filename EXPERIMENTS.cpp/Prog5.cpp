// Program to find the larger among two numbers.

#include <iostream>
using namespace std;
int main()
{
    int x, y;

    cout << "Enter value of x:";
    cin >> x;

    cout << "Enter value of y:";
    cin >> y;

    if (x > y)
    {
        cout << "x is greater than y.";
    }
    else if (x < y)
    {
        cout << "y is greater than x.";
    }
    else
    {
        cout << "x is equal to y.";
    }

    return 0;
}