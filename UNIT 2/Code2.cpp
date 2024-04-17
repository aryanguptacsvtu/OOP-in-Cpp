// Accesing Global variables using Scope Resolution operator.

#include <iostream>
using namespace std;

int num = 50; // Global Variable

int main()
{

    int num = 100; // Local Variable

    cout << "The value of local variable(num):" << num << endl;
    cout << "The value of global variable(num):" << ::num << endl;
    return 0;
}
