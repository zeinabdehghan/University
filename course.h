#ifndef CPP_COURSE_H
#define CPP_COURSE_H
#include <string>
#include <iostream>

class Course {
private:
    std :: string name;
    int unit;
    double * mark;
public:
    Course(std :: string name ,int unit , double mark );
    Course(const Course & r);
    ~Course();
    friend std:: ostream & operator << (std :: ostream &output,  Course c);
    friend std:: istream & operator >> (std:: istream &input,  Course &c);
    void set(std ::string n , int u , double m);
    std :: string get_name();
    double  get_mark();
    int get_unit();
};


#endif //CPP_COURSE_H
