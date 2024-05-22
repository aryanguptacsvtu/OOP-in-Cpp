#include <iostream>
using namespace std;

template <class T1, class T2>
float funcAverage(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}

template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    float a, b;
    int x = 5, y = 7;

    a = funcAverage(5, 2);
    cout << "The average of these numbers:" << a << endl;

    b = funcAverage(5.55, 2.35);
    cout << "The average of these numbers:" << b << endl;

    cout << "Value of x & y before swapping:" << x << "," << y << endl;
    swapp(x, y);
    cout << "Value of x & y after swapping:" << x << "," << y << endl;

    return 0;
}