#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream outFile("example.txt");

    if (outFile.is_open())
    {
        outFile << "Hello World!" << endl;
        outFile << "This is a test" << endl;
        outFile.close();
        cout << "Data written to file successfully!" << endl;
    }
    else
    {
        cout << "Unable to open file for writing!";
    }

    return 0;
}