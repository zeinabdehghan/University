#include "Person.h"
#include "iostream"
using namespace std;

Person::Person(string fN, string LN, string id ,double wh) {
    this->firstName= fN;
    this->lastName= LN;
    this->id= id;
    workHours = new double ;
    *workHours = wh;

}
Person ::Person(const Person &r) {
    firstName = r.firstName;
    lastName = r.lastName;
    id = r.id;
    workHours = new double;
    *workHours = *r.workHours;
}
Person ::~Person() {
    delete this->workHours;
}
void Person ::set(std::string fN, std::string lN, std::string ID, double wH) {
    firstName = fN;
    lastName = lN;
    id = ID;
   *workHours = wH;
}
string Person ::get_ID() {
    return id;
}
string Person ::get_firstname() {
    return firstName;
}
string Person ::get_lastname() {
    return lastName;
}
double Person ::get_workHours() {
    return * workHours;
}