#include <iostream>
using namespace std;

class Student
{
public:
    static int total;
    Student()
    {
        total += 1;
    }
};

int Student ::total = 0;

int main()
{
    Student s1;
    cout << "No. of students:" << s1.total << endl;

    Student s2;
    cout << "No. of students:" << s2.total << endl;

    Student s3;
    cout << "No. of students:" << s3.total << endl;

    return 0;
}