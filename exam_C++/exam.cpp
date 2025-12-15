#include <iostream>
#include <string>
#include <vector>
#include <limits> //cin.ignore
#include <fstream>

using namespace std;

class Employee {
private:
    string name;
    int id;
    double salary;

public:
    Employee(const string& name, int id, double salary) {
        this->name = name;
        this->id = id;
        this->salary = salary;
    }

    string getName() const {
        return name;
    }

    int getId() const {
        return id;
    }

    double getSalary() const {
        return salary;
    }

    void setSalary(double newSalary) {
        if (newSalary >= 0) {
            salary = newSalary;
        }
    }
};

class Manager : public Employee {
private:
    string department;

public:
    Manager(const string& name, int id, double salary, const string& department) : Employee(name, id, salary), department(department) {}

    string getDepartment() const{
        return department;
    }

    double getSalary() const {
        return Employee::getSalary() * 1.1;
    }
};

bool isValidEmployeeData(const string&  name, int id, double salary) {
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

void saveToFile(const std::vector<Employee>& employees, const std::string& filename) {
    std::ofstream file(filename);
    
    if (!file.is_open()) {
        std::cout << "cannot open file" << endl;
        return;
    }
    
    // Сохраняем данные каждого сотрудника
    for (const auto& employee : employees) {
        file << employee.getId() << " "
             << employee.getName() << " "
             << employee.getSalary() << "\n";
    }
    
    file.close();

    if (file.fail()) {
        std::cout << "error in saving" << endl;
    } else {
        std::cout << "savid in " << filename << endl;
    }

}



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