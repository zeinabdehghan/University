#include "course.h"
#include "Student.h"
using namespace std;

Student::Student(string fN ,string LN ,string id , double wh, Course* c, string fos, int noc)  : Person(fN, LN ,id, wh) {

    FieldOfStudy = fos;
    numOfCourses = noc;
    for(int i=0; i<numOfCourses; i++){
        courses = new Course;
    courses[i] = c[i];}

    if (!validate( id)) {
        cout << "Invalid id";
        exit(0);
}}

Student::Student(const Student &r) : Person(r) {
    FieldOfStudy= r.FieldOfStudy;
    numOfCourses = r.numOfCourses;
    for(int i=0; i<numOfCourses; i++){
        courses = new Course; courses[i] = r.courses[i];}
}

Student :: ~Student() {
    delete  this->courses;
}
std::ostream &operator<<(ostream &output, Student s) {
    cout<< s.FieldOfStudy;
    cout << s.numOfCourses;
    cout << *s.courses;
    return output;
}

std::istream &operator>>(istream &input, Student &s) {
    cin >>s.FieldOfStudy;
    cin >>s.numOfCourses;
    cin >>*s.courses;
    return input;
}

bool Student::validate(string id) {
    if (id [2]!= '*')
        return 0;
}
    double Student::gpa() {
        double sum =0;
        int units=0;
        for (int i = 0; i <numOfCourses; i++) {
            sum += courses[i].get_mark() * courses[i].get_unit();
        }
       for (int i = 0; i <numOfCourses; i++){
      units =  numOfCourses*courses[i].get_unit();
        }
       double gpa = sum/units;

        return gpa;
    }

double Student::calculateSalary() {
        double salary = (get_workHours()) *20000;
        if (gpa()> 17)
            salary+=salary/10;
    return salary;
}

Student Student::operator=( Student & s1) {
    Person ::operator=(s1);
    FieldOfStudy = s1.FieldOfStudy;
    numOfCourses = s1.numOfCourses;
    for(int i=0; i<numOfCourses; i++){
        courses = new Course; courses[i] = s1.courses[i];}
}

Student::Student() {}

