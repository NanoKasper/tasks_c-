#ifndef VALID_H
#define VALID_H

#include "Employee.h"
#include <string>
#include <vector>

using namespace std;

bool isValidEmployeeData(const string& name, int id, double salary);
void saveToFile(const vector<Employee>& employees, const string& filename);

#endif
