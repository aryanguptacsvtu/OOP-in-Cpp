#include <iostream>
using namespace std;

class Box
{
private:
    static int length;
    static int breadth;
    static int height;

public:
    static void print()
    {
        cout << "The value of length is:" << length << endl;
        cout << "The value of breadth is:" << breadth << endl;
        cout << "The value of height is:" << height << endl;
    }
};

int Box ::length = 10;
int Box ::breadth = 20;
int Box ::height = 30;

int main()
{
    Box b;

    cout << "Static member function is called through object name:" << endl;
    b.print();

    cout << endl;
    cout << "Static member function is called through class name:" << endl;
    Box::print();

    return 0;
}