#include <iostream>
using namespace std;
int main()
{
    int a = 4;
    int *ptr = &a;

    cout << "The value of a is:" << *ptr << endl << endl;

    int *p = new int(50);
    float *x = new float(50.78);
    cout << "The value at address p is:" << *p << endl;
    cout << "The value at address x is:" << *x << endl << endl;


    int *arr = new int[3]; // Allocating a block of memory using 'new'.
    arr[0] = 100;
    *(arr + 1) = 200; //--> Same as arr[1]
    arr[2] = 300;

    cout << "The value of arr[0] is:" << arr[0] << endl;
    cout << "The value of arr[1] is:" << arr[1] << endl;
    cout << "The value of arr[2] is:" << arr[2] << endl << endl;


    int *z = new int('z');
    delete z;
    cout << "The value at address p is:" << *z << endl; // --> Gives Garbage Value as output.

    // delete[] arr; --> Deletes whole block of memory.
    return 0;
}