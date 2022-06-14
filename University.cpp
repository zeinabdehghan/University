#include "University.h"
#include "Student.h"
#include "Professor.h"
#include "Person.h"
using namespace  std;

University::University(int b, int nop, int nos, Professor *&p, Student *&s) {
budget = b;
numOfProfessor =nop;
numOfStudent = nos;
    pp = new Professor *[numOfProfessor];
    ss = new Student * [numOfStudent];
    for (int i = 0; i < nos; i++) {
        ss[i] = new Student(s[i]);
    }

    for (int i = 0; i < nop; ++i) {
        pp [i]= new Professor(p[i]) ;
    }

}

University::University(const University &r) {
budget = r.budget;
numOfStudent = r.numOfStudent;
numOfProfessor = r.numOfProfessor;
    pp = new Professor *[numOfProfessor];
    ss = new Student * [numOfStudent];
    for (int i = 0; i < numOfStudent; i++) {
        ss[i] = new Student(* r.ss[i]);
    }

    for (int i = 0; i < numOfProfessor; ++i) {
        pp [i]=new Professor (*r.pp[i]);
    }

}

University::~University() {
    for (int i = 0; i < numOfProfessor; ++i) {
        delete pp[i];
    }
    delete this->pp;
    for (int i = 0; i < numOfStudent; ++i) {
        delete ss[i];
    }
    delete this->ss;

}
