#include "Professor.h"
#include "Student.h"
#ifndef CPP_UNIVERSITY_H
#define CPP_UNIVERSITY_H


class University {
private: int budget; int numOfProfessor;
int numOfStudent ; Professor ** pp;
Student ** ss;
public:
    University( int b , int nop, int nos, Professor *& p, Student * &s);
    University(const University &r);
    ~University();
};


#endif //CPP_UNIVERSITY_H
