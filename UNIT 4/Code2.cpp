#include <iostream>
using namespace std;
int main()
{
    int var = 5;
    int *ptr = &var;

    cout << "Var=" << var << endl;
    cout << "*ptr=" << *ptr << endl;
    cout << endl;

    var = 7;
    cout << "Var=" << var << endl;
    cout << "*ptr=" << *ptr << endl;
    cout << endl;

    *ptr = 16;
    cout << "Var=" << var << endl;
    cout << "*ptr=" << *ptr << endl;
    return 0;
}