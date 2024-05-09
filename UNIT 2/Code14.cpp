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
        cout << "m=" << m << ",n=" << n;
    }
};
int main()
{
    boot aa(5, 10);
    aa.putdata();
    return 0;
}
