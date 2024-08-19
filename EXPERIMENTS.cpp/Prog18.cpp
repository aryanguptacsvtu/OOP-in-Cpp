#include <iostream>
#include <stdexcept>
using namespace std;

// Function to perform division
double divide(double numerator, double denominator)
{
    if (denominator == 0)
    {
        throw invalid_argument("Division by zero is not allowed.");
    }
    return numerator / denominator;
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
        // Attempt to perform division
        result = divide(num, den);
        cout << "Result: " << result << endl;
    }
    catch (const invalid_argument &e)
    {
        // Catch and handle the exception
        cout << "Error: " << e.what() << endl;
    }

    cout << "Program continues..." << endl;

    return 0;
}
