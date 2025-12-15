#include "Manager.h"

Manager::Manager(const string& name, int id, double salary, const string& department)
    : Employee(name, id, salary), department(department) {}

string Manager::getDepartment() const { return department; }

double Manager::getSalary() const {
    return Employee::getSalary() * 1.1; // надбавка 10%
}
