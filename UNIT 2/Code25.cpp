#include <iostream>
using namespace std;
class geeks
{
    int *ptr;

public:
    geeks()
    {
        ptr = new int;
        *ptr = 10;
    }
    void display()
    {
        cout << "Output: "<<*ptr << endl;
    }
};
int main()
{
    geeks obj1;

    obj1.display();
    return 0;
}
