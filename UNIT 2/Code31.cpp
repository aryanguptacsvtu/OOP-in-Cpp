#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    string str;
    // Setting string limit to 5 characters.
    cout << "Enter the string:";
    cin >> setw(5) >> str;
    cout << "Output:" << str;
    return 0;
}
