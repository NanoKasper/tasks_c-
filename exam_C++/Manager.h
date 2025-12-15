#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"
#include <string>
using namespace std;

class Manager : public Employee {
private:
    string department;

public:
    Manager(const string& name, int id, double salary, const string& department);

    string getDepartment() const;
    double getSalary() const override;
};

#endif
