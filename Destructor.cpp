#include <iostream>
using namespace std;

int count = 0;
class num
{
public:
    num()
    {
        count++;
        cout << "Constructor called for object no." << count << endl;
    }
    ~num()
    {
        cout << "Destructor called for object no." << count << endl;
        count--;
    }
};

int main()
{
    cout << "We are inside our main function." << endl;
    cout << "Creating first object n1." << endl;
    num n1;
    cout << endl;
    {
        cout << "Entering the block:-" << endl;
        cout << "Creating two more objects." << endl;
        num n2, n3;
        cout << "Exiting this block!!" << endl;
    }
    cout << endl;
    cout << "Back to main." << endl;

    return 0;
}