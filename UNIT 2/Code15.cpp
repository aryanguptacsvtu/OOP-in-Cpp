#include <iostream>
using namespace std;
class boot
{
    int m, n;

public:
    boot(int x, int y)
    {
        m = x;
        n = y;
    }
    void putdata()
    {
        cout << "m=" << m << "\n" << "n=" << n;
    }
};

int main()
{
    int f, g;

    cout << "Enter two numbers:";
    cin >> f;
    cin >> g;

    boot aa(f, g);
    aa.putdata();
    
    return 0;
}
