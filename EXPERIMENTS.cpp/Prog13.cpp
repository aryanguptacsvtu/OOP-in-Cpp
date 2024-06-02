#include <iostream>
using namespace std;

class Number
{
private:
    int num1;
    int num2;

public:
    Number(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
    friend int add(Number n);
};
int add(Number n)
{
    return n.num1 + n.num2;
}

int main()
{
    Number n(15, 10);
    cout << "Sum:" << add(n);

    return 0;
}