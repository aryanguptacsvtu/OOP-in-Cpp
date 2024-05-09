#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    string str("GeeksforGeeks");

    // Adding padding
    cout << "Increasing Width:\n"<< setw(20) << str << endl;
    
    // Reducing width
    cout << "Decreasing Width:\n"<< setw(5) << str;

    return 0;
}