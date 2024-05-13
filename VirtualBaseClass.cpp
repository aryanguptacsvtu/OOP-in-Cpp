#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void set_roll_number(int a)
    {
        roll_no = a;
    }
    void print_roll_number()
    {
        cout << "Your roll no. is:" << roll_no << endl;
    }
};

class Test : virtual public Student      // 'Test' is derived from 'Student'(vitual base class)
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks()
    {
        cout << "Your marks are:-" << endl
             << "Maths:" << maths << " , Physics:" << physics << endl;
    }
};

class Sports : public virtual Student    // 'Sports' is derived from 'Student'(vitual base class)
{
protected:
    int score;

public:
    void set_score(int sc)
    {
        score = sc;
    }
    void print_score()
    {
        cout << "Your score is:" << score << endl;
    }
};

class Result : public Test, public Sports       // 'Result' is derived from 'Test' & 'Sports'
{
private:
    float total;

public:
    void display()
    {
        total = maths + physics + score;
        print_roll_number();
        print_marks();
        print_score();
        cout << "Your Result is:" << total << endl;
    }
};

int main()
{
    Result Harry;

    Harry.set_roll_number(11);
    Harry.set_marks(75.5, 85.5);
    Harry.set_score(9);
    Harry.display();

    return 0;
}