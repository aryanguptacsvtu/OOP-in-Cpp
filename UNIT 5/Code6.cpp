#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream fp;
    char buf[100];
    int pos;

    fp.open("newFile.txt", ios::out | ios::ate);
    cout << "WRITING TO A FILE." << endl;

    fp << "This is one line." << endl;
    fp << "This is another line." << endl;

    pos = fp.tellp();
    cout << "Current position of 'put' pointer:" << pos << endl;

    fp.seekp(-1, ios::cur); // Moving the pointer 1 byte backward.
    fp << "Writing at a random location." << endl;

    fp.seekp(7, ios::beg); // Moving the pointer 7 bytes forward.
    fp << "Hello World";

    pos = fp.tellp();
    cout << "Current position of 'put' pointer:" << pos << endl;
    fp.close();

    cout << "Writing complete!!" << endl;

    fp.open("newFile", ios::in | ios::ate);
    cout << "\nREADING FROM THE FILE." << endl;
    fp.seekg(0);

    while (!fp.eof())
    {
        fp.getline(buf, 100);
        cout << buf << endl;
    }
    pos = fp.tellg();
    cout << "Current position of 'get' pointer:" << pos << endl;
    fp.close();
    return 0;
}