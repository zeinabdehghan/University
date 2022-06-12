#include "course.h"
using namespace std;

Course::Course(string n, int u, double m) {
    name = n;
    unit = u;
    mark = new double;
    *mark = m;
}

Course::Course(const Course &r) {
    unit = r.unit;
    name = r.name;
    mark = new double;
    *mark = *r.mark;
}

Course::~Course() {
    delete this->mark;
}

ostream &operator<<(ostream &output, const Course c) {
    cout << c.name;
    cout << c.unit;
    cout << c.mark;
    return output;
}

istream &operator>>(istream &input, Course &c) {
    cin >> c.name;
    cin >> c.unit;
    cin >> *c.mark;
    return input;
}
void Course::set(string n, int u, double m) {
name = n;
unit = u;
*mark = m;
}

string Course::get_name() {
    return name;
}

double Course::get_mark() {
    return *mark;
}

int Course::get_unit() {
    return unit;
}

