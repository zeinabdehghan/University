#ifndef CPP_STUDENT_H
#define CPP_STUDENT_H
#include "Person.h"
#include "course.h"
#include "string"

class Student : public Person{
private:
    Course* courses ; std::string FieldOfStudy; int numOfCourses;
public:
    Student(std :: string fN, std :: string LN , std ::string  id , double wh , Course * c,std ::string fos , int noc);
    Student(const Student & r);
    Student();
    ~Student() override;
    friend std:: ostream & operator << (std :: ostream &output,  Student s);
    friend std:: istream & operator >> (std:: istream &input,  Student & s);
    bool validate(std :: string id) override ;
    double gpa();
    double calculateSalary() override;
    Student operator = (Student &s1);

};


#endif //CPP_STUDENT_H
