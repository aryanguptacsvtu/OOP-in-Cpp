#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream out;

    out.open("sample3.txt");        // Writing in a File.
    out << "This is me." << endl;
    out << "Hello world!" << endl;
    out << "How are you?";
    out << "Learning File Handling.";
    out.close();


    ifstream in;
    string st, st2, st3;          
    in.open("sample3.txt");       // Reading from a File.
    in >> st;
    in >> st2;
    cout << st << st2;
    
    cout<<"\nReading from file using eof():-"<<endl;
    while (in.eof() == 0)
    {
        getline(in, st3);
        cout << st3 << endl;
    }
    in.close();

    return 0;
}