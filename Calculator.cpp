#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator
{
    int a, b;

public:
    void getDataSimple()
    {
        cout << "For 'Simple Calculation':-" << endl;
        cout << "Enter the value of a:";
        cin >> a;
        cout << "Enter the value of b:";
        cin >> b;
    }
    void SimpleOperations()
    {
        cout << "The value of a+b is:" << a + b << endl;
        cout << "The value of a-b is:" << a - b << endl;
        cout << "The value of a*b is:" << a * b << endl;
        cout << "The value of a/b is:" << a / b << endl << endl;
    }
};

class ScientificCalculator
{
    int a, b;

public:
    void getDataScientific()
    {
        cout << "For 'Scientific Calculation':-" << endl;
        cout << "Enter the value of a:";
        cin >> a;
        cout << "Enter the value of b:";
        cin >> b;
    }
    void ScientificOperations()
    {
        cout << "The value of sin(a) is:" << sin(a) << endl;
        cout << "The value of cos(b) is:" << cos(b) << endl;
        cout << "The value of exp(a) is:" << exp(a) << endl;
        cout << "The value of pow(a,b) is:" << pow(a, b) << endl;
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
};

int main()
{
    HybridCalculator obj;

    obj.getDataSimple();
    obj.SimpleOperations();

    obj.getDataScientific();
    obj.ScientificOperations();

    return 0;
}