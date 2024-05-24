#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

void display(int a[])
{
    for (int i = 0; i < 6; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 73, 4, 2, 54, 16};

    sort(arr, arr + 3);
    display(arr);

    sort(arr, arr + 6);   // Sorting(Ascending Order)
    display(arr);

    sort(arr, arr + 6, greater<int>());    // Using 'Functors'
    display(arr);        // Sorting(Descending Order)

    return 0;
}

// "Function Objects"(Functors):- Function wrapped in a class so that it is available like an object.