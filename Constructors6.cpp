#include <iostream>
using namespace std;

class BankDeposit
{
    int principal, years;
    float rate, returnValue;

public:
    BankDeposit() {}
    BankDeposit(int p, int y, float r);
    BankDeposit(int p, int y, int r);
    void show()
    {
        cout << "Principal amount was:" << principal << endl;
        cout << "Return value after " << years << " years is:" << returnValue << endl;
    }
};

BankDeposit::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    rate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + rate);
    }
}

BankDeposit::BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    rate = float(r) / 100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + rate);
    }
}

int main()
{
    BankDeposit bd1, bd2;
    int p, y;
    float r;
    int R;

    cout << "Enter the value of p,y & r(in float):";
    cin >> p >> y >> r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout << endl;
    cout << "Enter the value of p,y & R(in integer):";
    cin >> p >> y >> R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();

    return 0;
}