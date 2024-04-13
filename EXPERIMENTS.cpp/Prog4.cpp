// Program to find Simple Interest.

#include <iostream>
using namespace std;
int main()
{
    int p, r, t;
    float si;

    cout << "Enter the principle:";
    cin >> p;

    cout << "Enter the rate:";
    cin >> r;

    cout << "Enter the time :";
    cin >> t;

    si = float((p * r * t))/ 100;
    cout << "The Simple Interest is:" << si;
    return 0;
}