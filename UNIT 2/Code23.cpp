#include <iostream>
using namespace std;
class boot
{
    int m, n;

public:
    boot(int x, int y)            // Constructor Overloading
    {                        
        m = x;
        n = y;
    }
    boot(int x)
    {
        m = x;
        n = 0;
    }
    void printnumber()
    {
        cout << "Your number is :"<<" m = "<<m<<" ,n = "<<n<<endl;
    }
};

int main()
{
    boot hello(5, 10);
    hello.printnumber();

    boot hello2(5);
    hello2.printnumber();

    return 0;
}
