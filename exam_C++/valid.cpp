#include "valid.h"
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

bool isValidEmployeeData(const std::string& name, int id, double salary) {
    if (name.empty()) {
        return false;
    }
    
    if (id < 0) {
        return false;
    }
    
    if (salary <= 0) {
        return false;
    }
    
    return true;
}

void saveToFile(const vector<Employee>& employees, const string& filename) {
    ofstream file(filename);
    
    if (!file.is_open()) {
        cout << "cannot open file" << endl;
        return;
    }
    
    for (const auto& employee : employees) {
        file << employee.getId() << " "
             << employee.getName() << " "
             << employee.getSalary() << " " << endl;
    }
    
    file.close();

    if (file.fail()) {
        cout << "error in saving" << endl;
    } else {
        cout << "savid in " << filename << endl;
    }

}