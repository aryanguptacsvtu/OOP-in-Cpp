#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream fp;

    fp.open("file.txt", ios::out);
    char data[50];

    fp >> data;
    if (fp.bad())
    {
        cout << "Status of bad bit:" << fp.bad() << endl;
    }
    else
    {
        cout << "Data read from file." << data;
    }

    fp.close();
    return 0;
}