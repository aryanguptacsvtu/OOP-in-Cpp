#include <iostream>
using namespace std;
int main()
{
    int *ptr;
    int marks[10];

    cout << "Enter elements of array:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> marks[i];
    }

    ptr = marks;
    cout << "The value *ptr:" << *ptr << endl;
    cout << "The value *marks:" << *marks << endl;
    return 0;
}