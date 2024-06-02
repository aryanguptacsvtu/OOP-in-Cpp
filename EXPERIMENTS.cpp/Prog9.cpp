#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int age;
    string dob;
    string birthplace;
    string languagesKnown[3];
    string softSkills[3];
    string hardSkills[3];
    double percentage10;
    double percentage12;

public:
    Student(string n, int a, string d, string bp, string lang[], string soft[], string hard[], double p10, double p12)
        : name(n), age(a), dob(d), birthplace(bp), percentage10(p10), percentage12(p12)
    {
        for (int i = 0; i < 3; ++i)
        {
            languagesKnown[i] = lang[i];
            softSkills[i] = soft[i];
            hardSkills[i] = hard[i];
        }
    }

    void displayBiodata() const
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Date of Birth: " << dob << endl;
        cout << "Birthplace: " << birthplace << endl;

        cout << "Languages Known: " << endl;
        for (int i = 0; i < 3; ++i)
        {
            cout << languagesKnown[i] << endl;
        }
        cout << endl;

        cout << "Soft Skills: " << endl;
        for (int i = 0; i < 3; ++i)
        {
            cout << softSkills[i] << endl;
        }
        cout << endl;

        cout << "Hard Skills: " << endl;
        for (int i = 0; i < 3; ++i)
        {
            cout << hardSkills[i] << endl;
        }
        cout << endl;

        cout << "10th Grade Percentage: " << percentage10 << "%" << endl;
        cout << "12th Grade Percentage: " << percentage12 << "%" << endl;
    }
};

int main()
{
    string languages[3] = {"English", "Spanish", "French"};
    string softSkills[3] = {"Communication", "Teamwork", "Problem-solving"};
    string hardSkills[3] = {"C++", "Python", "Data Structures"};

    Student stud1("John Doe", 18, "01-01-2006", "New York", languages, softSkills, hardSkills, 85.5, 90.0);

    stud1.displayBiodata();

    return 0;
}
