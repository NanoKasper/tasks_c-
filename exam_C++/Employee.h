#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class Employee {
private:
    string name;
    int id;
    double salary;

public:
    Employee();
    Employee(const string& name, int id, double salary);

    string getName() const;
    int getId() const;
    virtual double getSalary() const; 
    void setSalary(double newSalary);
};

#endif
