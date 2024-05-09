#include <iostream>
using namespace std;
class boot
{
    int m, n;

public:
    boot(int x, int y = 9)     // Constructors with Default arguments
    {
        m = x;
        n = y;
    }
    void printnumber()
    {
        cout << "Your number is: " << "m=" << m  << " and" << " " << "n=" << n << "\n";
    }
};
int main()
{
    boot hello(5);
    hello.printnumber();

    boot hi(7, 10);
    hi.printnumber();
    return 0;
}
