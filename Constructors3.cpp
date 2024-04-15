#include <iostream>
using namespace std;

class Point
{
    int x, y;

public:
    Point(int a, int b)    // Parameterized Constructor
    {
        x = a;
        y = b;
    }
    void displayPoint()
    {
        cout << "The point is (" << x << "," << y << ")" << endl;
    }
};

int main()
{
    Point p(1, 2);
    p.displayPoint();

    Point q(11, 7);
    q.displayPoint();

    return 0;
}
