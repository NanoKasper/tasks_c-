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
    Employee(); // конструктор по умолчанию
    Employee(const string& name, int id, double salary);

    string getName() const;
    int getId() const;
    virtual double getSalary() const; // виртуальный для полиморфизма
    void setSalary(double newSalary);
};

#endif
