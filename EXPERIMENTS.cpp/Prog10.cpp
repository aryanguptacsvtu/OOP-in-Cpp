#include <iostream>
using namespace std;

int count = 0;
class Example
{
public:
    Example()
    {
        count++;
        cout << "Constructor called for object no." << count << endl;
    }
    ~Example()
    {
        cout << "Destructor called for object no." << count << endl;
        count--;
    }
};

int main()
{
    Example obj1;
    Example obj2;

    cout << "No. of objects created:" << count << endl;
    cout << "No. of objects destroyed:" << count<<endl;

    return 0;
}