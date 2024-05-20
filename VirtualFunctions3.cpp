#include <iostream>
#include <cstring>
using namespace std;

class Course           //--> Abstract Base class
{
protected:
    string title;
    float rating;

public:
    Course(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() = 0 ;   // 'do-nothing' function --> "Pure Virtual Function"
};

class CourseVideo : public Course
{
    float videoLength;

public:
    CourseVideo(string s, float r, float vl) : Course(s, r)
    {
        videoLength = vl;
    }
    void display()
    {
        cout << "This is a 'video' with title: " << title << endl;
        cout << "Rating: " << rating << "(out of 5 stars)" << endl;
        cout << "Length of this video(in min.) is: " << videoLength << endl<<endl;
    }
};

class CourseText : public Course
{
    int words;

public:
    CourseText(string s, float r, int wc) : Course(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "This is a 'text tutorial' with title: " << title << endl;
        cout << "Rating of this text tutorial: " << rating << "(out of 5 stars)" << endl;
        cout << "No. of words in this text tutorial is: " << words << endl;
    }
};

int main()
{
    string title;
    float rating, videoLength;
    int words;

    title = "C++ Tutorial";
    videoLength = 10.4;
    rating = 4.9;
    CourseVideo objVideo(title, rating, videoLength);
    // objVideo.display();  [VALID]

    title = "C++ Text Tutorial";
    words = 450;
    rating = 4.88;
    CourseText objText(title, rating, words);
    // objText.display();   [VALID]


    Course *tuts[2];               
    tuts[0] = &objVideo;         // Using pointers to call the function.
    tuts[1] = &objText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}

// 'Abstract Base class':- A Class designed to make Inherited classes from it & not for creating objects.
