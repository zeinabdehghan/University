#include "course.h"
#include "Student.h"
using namespace std;

Student::Student(string fN ,string LN ,string id , double wh, Course c, string fos, int noc)  : Person(fN, LN ,id, wh) {

    FieldOfStudy = fos;
    numOfCourses = noc;
    for(int i=0; i<numOfCourses; i++)
    courses = new Course; *courses = c;
}

Student::Student(const Student &r) : Person(r) {
    FieldOfStudy= r.FieldOfStudy;
    numOfCourses = r.numOfCourses;
    for(int i=0; i<numOfCourses; i++)
        courses = new Course; *courses = *r.courses;
}
Student :: ~Student() {
    delete this->courses;
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
