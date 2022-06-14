#include "Person.h"
#include "course.h"
#include "string"
#ifndef CPP_PROFESSOR_H
#define CPP_PROFESSOR_H


class Professor : public Person{
private: std :: string title;
public:
    Professor(std :: string fN, std :: string LN , std ::string  id , double wh , std :: string title);
    friend std:: ostream & operator << (std :: ostream &output,  Professor pr);
    friend std:: istream & operator >> (std:: istream &input,  Professor &pr);
    bool validate(std :: string id) override ;
    double calculateSalary() override;

};


#endif //CPP_PROFESSOR_H
