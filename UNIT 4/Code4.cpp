#include <iostream>
using namespace std;

void geeks()
{
    int val[3] = {5, 10, 20};
    int *ptr = val;

    cout << "Elements of array are:";
    cout << ptr[0] << " " << ptr[1] << " " << ptr[2] << endl;
}
int main()
{
    geeks();
    return 0;
}