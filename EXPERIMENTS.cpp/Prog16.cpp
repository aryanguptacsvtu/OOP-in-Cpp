#include <iostream>
#include <fstream>
using namespace std;

struct Student
{
    int id;
    string name;
    float grade;
};

int main()
{
    // Array to hold 5 students
    Student s[5];

    // Input 5 student records
    for (int i = 0; i < 5; ++i)
    {
        cout << "Enter details for student " << i + 1 << ":\n";
        cout << "ID: ";
        cin >> s[i].id;
        cout << "Name: ";
        cin.ignore(); // Clear the input buffer
        getline(cin, s[i].name);
        cout << "Grade: ";
        cin >> s[i].grade;
    }

    // Open file to write student records
    ofstream outFile("students.txt");

    if (!outFile)
    {
        cerr << "Error opening file for writing!" << endl;
        return 1;
    }

    // Write student records to file
    for (int i = 0; i < 5; ++i)
    {
        outFile << "ID: " << s[i].id << endl;
        outFile << "Name: " << s[i].name << endl;
        outFile << "Grade: " << s[i].grade << endl;
        outFile << endl; // Separate records with a blank line
    }

    // Close the file
    outFile.close();

    cout << "Student records have been saved to students.txt" << endl;

    return 0;
}
