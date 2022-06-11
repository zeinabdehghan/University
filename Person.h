#ifndef CPP_PERSON_H
#define CPP_PERSON_H

#include <string>


class Person {
private:
    std::string firstName;
    std::string lastName;
    std::string id;
    double *workHours;
public:
    Person(std::string firstName, std::string lastName, std::string id, double wh);

    Person(const Person &r);

    ~Person();

    void set(std::string fN, std::string lN, std::string ID, double wH);

    std::string get_firstname();

    std::string get_lastname();

    std::string get_ID();

    double get_workHours();

};