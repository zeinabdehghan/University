#include "course.h"
using namespace std;
Course ::Course(string n, int u, double m) {
    name = n;
    unit = u;
    mark = new double;
    *mark =m;
}
Course ::Course(const Course &r) {
    unit = r.unit;
    name = r.name;
    mark = new double;
    * mark = *r.mark;
}
Course ::~Course() {
    delete this->mark;
}
