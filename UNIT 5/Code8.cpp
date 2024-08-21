#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream fp;

    fp.open("NEW.txt", ios::out);
    char data[100];

    cout << "Enter string:";
    cin.getline(data, 50);

    fp << data;

    if (fp.good())
    {
        cout << "Data written to file successfully." << endl;
    }
    else
    {
        cout << "Not successfull." << data;
    }

    fp.close();
    return 0;
}