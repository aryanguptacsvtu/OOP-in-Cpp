#include <iostream>
#include <stdexcept>
using namespace std;

double divide(double n, double d)
{
    if (d == 0)
    {
        throw invalid_argument("Division by zero is not allowed.");
    }
    return n / d;
}

int main()
{
    double num, den, result;

    cout << "Enter the numerator: ";
    cin >> num;
    cout << "Enter the denominator: ";
    cin >> den;

    try
    {
        result = divide(num, den);
        cout << "Result: " << result << endl;
    }
    catch (const invalid_argument &e)
    {
        cout << "Error: " << e.what() << endl;
    }

    cout << "Program continues..." << endl;

    return 0;
}
