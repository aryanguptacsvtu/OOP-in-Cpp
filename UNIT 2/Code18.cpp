#include <iostream>
using namespace std;
class Point
{
public:
    Point()
    {
        cout << "Constructor called";
    }
};
int main()
{
    Point t1, *t2;
    return 0;
}