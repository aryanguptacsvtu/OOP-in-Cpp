#include <iostream>
using namespace std;

class complex
{
private:
    int a, b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void Sum(complex o1, complex o2)    // Passing objets as Function Arguments.
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void Print()
    {
        cout << "Your complex number is:" << a << " + " << b << "i" << endl;
    }
};

int main()
{
    complex c1, c2, c3;

    c1.setData(3, 5);
    c1.Print();

    c2.setData(1, 8);
    c2.Print();

    c3.Sum(c1, c2);
    c3.Print();

    return 0;
}
