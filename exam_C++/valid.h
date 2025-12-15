#ifndef VALID_H
#define VALID_H

#include "Employee.h"
#include <string>
using namespace std;

bool isValidEmployeeData(const string& name, int id, double salary);
void saveToFile(const Employee employees[], int size, const string& filename);

#endif
