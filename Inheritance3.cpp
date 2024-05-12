// ** MULTILEVEL INHERITANCE **

#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number();
};
void Student::set_roll_number(int r)
{
    roll_number = r;
}
void Student::get_roll_number()
{
    cout << "The roll number is:" << roll_number << endl;
}


class Exam : public Student       // 'Student' is the Base class for 'Exam'.
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks();
};
void Exam::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void Exam::get_marks()
{
    cout << "The marks obtained in Maths are:" << maths << endl;
    cout << "The marks obtained in Physics are:" << physics << endl;
}


class Result : public Exam      // 'Exam' is the Base class for 'Result'.
{
    float percentage;

public:
    void display_result()
    {
        get_roll_number();
        get_marks();
        cout << "Your percentage is:" << (maths + physics) / 2 << "%" << endl;
    }
};

int main()
{
    Result harry;
    harry.set_roll_number(100);
    harry.set_marks(94.5,91.5);
    harry.display_result();
    return 0;
}