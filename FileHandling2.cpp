#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string name;
    string content;

    cout << "Enter your name:";
    cin >> name;

    ofstream out("sample2.txt");
    out << "My name is:" + name;  // Writing a string to the file.
    out.close();


    ifstream in("sample2.txt");
    
    in >> content;               // Reading from a file.
    cout << "The content of this file is: " << content;
    in.close();

    return 0;
}