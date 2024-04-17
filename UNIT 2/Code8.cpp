#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length, breadth;

public:
    Rectangle(int length, int breadth) // Constructor
    {
        this->length = length;
        this->breadth = breadth;
    }

    int area()        // Inside Class Definition
    {
        return (length * breadth);
    }

    int perimeter()   // Inside Class Definition
    {
        return 2 * (length + breadth);
    }
};

int main()
{
    Rectangle r(2, 3);

    cout << "Perimeter:" << r.perimeter() << endl;
    cout << "Area:" << r.area() << endl;

    return 0;
}