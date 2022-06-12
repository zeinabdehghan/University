
#ifndef CPP_STUDENT_H
#define CPP_STUDENT_H
#include "Person.h"
#include "course.h"
#include "string"

class Student : public Person{
private:
    Course* course ; std::string FieldOfStudy; int numOfCourses;
public:
    Student(Course *course ,std ::string FieldOfStudy , int numOfCourses);

};


#endif //CPP_STUDENT_H
