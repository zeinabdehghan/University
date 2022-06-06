#ifndef CPP_COURSE_H
#define CPP_COURSE_H
#include <string>
using namespace std;

class Course {
private:
    string name;
    int unit;
    double * mark;
public:
    Course(string name ,int unit , double mark );
    Course(const Course & r);
    ~Course();

};


#endif //CPP_COURSE_H
