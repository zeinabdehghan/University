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

double University::averageGpa() {
    double temp=0;
    double average;
    for (int i = 0; i < numOfStudent; ++i) {
        temp += ss[i]->gpa();
    }
    average = temp / numOfStudent;
    return average;
}

double University::averageGpaOfField(string field) {
    double temp=0;
    double tmp =0;
    double avg;
    for (int i = 0; i < numOfStudent; ++i) {
        if (field ==  ss[i]->getFieldOfStudy()){
        temp += ss[i]->gpa();
        tmp++; }
    }avg = temp /tmp;
    return avg ;
}

bool University::isEnoughBudget() {
    double sSalary=0;
    double pSalary;
    for (int i = 0; i < numOfStudent; ++i) {
       sSalary += ss[i]->calculateSalary();
    }
    for (int i = 0; i <numOfProfessor ; ++i) {
        pSalary += pp[i]->calculateSalary();
    }

    double wholeSalary =sSalary +pSalary;
    double tmp = budget - wholeSalary;
    if (tmp < 0 ){
    return false;}

    return true;
}


