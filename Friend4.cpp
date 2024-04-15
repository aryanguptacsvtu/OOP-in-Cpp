#include <iostream>
using namespace std;

class c2; // Forward declaration.

class c1
{
    int val1;
    friend void exchange(c1 &, c2 &);

public:
    void inputData(int a)
    {
        val1 = a;
    }
    void display(void)
    {
        cout << val1 << endl;
    }
};

class c2
{
    int val2;
    friend void exchange(c1 &, c2 &);

public:
    void inputData(int a)
    {
        val2 = a;
    }
    void display(void)
    {
        cout << val2 << endl;
    }
};

void exchange(c1 &x, c2 &y)
{
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}

int main()
{
    c1 oc1;
    c2 oc2;

    oc1.inputData(55);
    oc2.inputData(88);

    cout << "The value of oc1 before Swapping:";
    oc1.display();
    cout << "The value of oc2 before Swapping:";
    oc2.display();

    exchange(oc1, oc2);
    cout << "\n";

    cout << "The value of oc1 after Swapping:";
    oc1.display();
    cout << "The value of oc2 after Swapping:";
    oc2.display();

    return 0;
}
