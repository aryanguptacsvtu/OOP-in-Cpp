// Using 'new' operator

#include <iostream>
using namespace std;
int main()
{
    int *arr, size;

    cout << "Enter the size of the integer array:";
    cin >> size;
    cout << "The size of integer array is: " << size << endl;
    arr = new int[size];
    cout << "Dynamic allocation is done";
    return 0;
}
