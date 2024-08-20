#include <iostream>
using namespace std;

int multiply(int a, int b)
{
    return a * b;
}

int main()
{
    int (*func)(int, int);

    func = multiply;
    int prod = func(15, 2);

    cout << "The value of product is:" << prod << endl;
    return 0;
}