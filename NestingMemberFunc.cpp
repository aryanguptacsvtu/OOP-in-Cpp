#include <iostream>
using namespace std;

class binary
{

    // private:[By default]
    string s;

public:
    void read(void);
    void chk_bin(void);
    void compliment(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number:";
    cin >> s;
}

void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format." << endl;
            exit(0);
        }
    }
}

void binary::compliment(void)
{
    chk_bin();                 // Nesting of Member Functions.
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary::display(void)
{
    cout << "Displaying your binary number:" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    binary b;

    b.read();
    // b.chk_bin(); [If nesting is not done]
    b.display();
    b.compliment();
    b.display();
    return 0;
}
