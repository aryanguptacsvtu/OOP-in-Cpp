#include <iostream>
using namespace std;
class Test
{
    static int i;
    int j;
};
int Test::i;

int main()
{
    cout << "The size is:" << sizeof(Test);
    return 0;
}