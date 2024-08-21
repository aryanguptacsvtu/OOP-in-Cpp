#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string line;

    ifstream inFile("example.txt");

    if (inFile.is_open())
    {
        while (getline(inFile, line))
        {
            cout << line << endl;
        }
        inFile.close();
    }
    else
    {
        cout << "Unable to open file for reading!";
    }

    return 0;
}