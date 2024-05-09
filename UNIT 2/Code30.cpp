#include <iostream>
#include <iomanip>
#include <ios>
using namespace std;
int main()
{
    int num = 50;

    cout << "Before setting the width: \n" << num << endl;
    // Using setw()
    cout << "Setting the width" << " using setw to 5: \n" << setw(5);
    cout << num;

    return 0;
}