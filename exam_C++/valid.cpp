#include "valid.h"
#include <iostream>
#include <fstream>
using namespace std;

bool isValidEmployeeData(const string& name, int id, double salary) {
    return (!name.empty() && id > 0 && salary >= 0);
}

void saveToFile(const Employee employees[], int size, const string& filename) {
    ofstream outFile(filename);
    if (!outFile.is_open()) {
        cout << "Error: cannot open file.\n";
        return;
    }
    for (int i = 0; i < size; i++) {
        outFile << employees[i].getId() << " "
                << employees[i].getName() << " "
                << employees[i].getSalary() << endl;
    }
    outFile.close();
}
