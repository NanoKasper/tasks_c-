#include <iostream>
#include <string>
#include <vector>
#include <limits> //cin.ignore
#include <fstream>
#include "Employee.h"
#include "Manager.h"
#include "valid.h"

using namespace std;

int main() {
    vector<Employee> employees;
    employees.reserve(5);

    for (int i = 0; i < 3; i++) {
        string name;
        int id;
        double salary;

        
        cout << "enter name: ";
        getline(cin, name);

        cout << "enter id: ";
        cin >> id;

        cout << "enter salary: ";
        cin >> salary;


        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        if (!isValidEmployeeData(name, id, salary)) {
            cout << "invalid employee data." << endl;
            continue;
        }

        employees.emplace_back(name, id, salary);
    }

    cout << "employee list:" << endl;
    for (const Employee& e : employees) {
        cout << "ID: " <<e.getId() << ", Name: " << e.getName() << ", Salary: " << e.getSalary() << endl;
    }

    saveToFile(employees, "employees.txt");
    
    Employee* staff[4];

    staff[0] = new Employee(employees[0].getName(), employees[0].getId(), employees[0].getSalary());
    staff[1] = new Employee(employees[1].getName(), employees[1].getId(), employees[1].getSalary());

    staff[2] = new Manager("Petr", 3, 70000, "Sales");
    staff[3] = new Manager("Olga", 4, 80000, "Marketing");

    cout << "\nSalaries:\n";
    for (int i = 0; i < 4; i++) {
        cout << staff[i]->getName() << ": " << staff[i]->getSalary() << endl;
    }

    for (int i = 0; i < 4; i++) {
        delete staff[i];
    }
    return 0;
}