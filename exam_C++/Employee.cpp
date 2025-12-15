#include "Employee.h"

Employee::Employee() : name(""), id(0), salary(0) {}

Employee::Employee(const string& name, int id, double salary) {
    this->name = name;
    this->id = id;
    this->salary = salary;
}

string Employee::getName() const { return name; }
int Employee::getId() const { return id; }

double Employee::getSalary() const { return salary; }

void Employee::setSalary(double newSalary) {
    if (newSalary >= 0) salary = newSalary;
}
