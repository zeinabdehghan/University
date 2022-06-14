
#include "Professor.h"

using namespace std;

Professor::Professor(std::string fN, std::string LN, std::string id, double wh, std::string title) : Person(fN, LN, id,
                                                                                                            wh) {
    this->title = title;

    if (!validate(id)) {
        cout << "Invalid id";
        exit(0);
    }
}

std::ostream &operator<<(std::ostream &output, Professor pr) {
    cout << pr.title;
    return output;
}

std::istream &operator>>(istream &input, Professor &pr) {
    cin >> pr.title;
    return input;
}

bool Professor::validate(std::string id) {
    if (id[4] == '#' && id.length() == 8) {
        return 1;
    } else return 0;
}

double Professor::calculateSalary() {
    double salary;
    if (title == "Instructor")
        salary = get_workHours() * 50000;
    if (title == "Assistant Professor")
        salary = get_workHours() * 60000;
    if (title == "Associate Professor")
        salary = get_workHours() * 70000;
    if (title == "Professor")
        salary = get_workHours() * 80000;

}
