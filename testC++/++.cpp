#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int grades[5];
    
public:
    Student(const string& studentName) {
        name = studentName;
        for(int i = 0; i < 5; i++) {
            grades[i] = 0;
        }

    }

    void setGrade(int subjectIndex, int grade) {
        if(subjectIndex >= 0 && subjectIndex < 5) 
        {
            grades[subjectIndex] = grade;
        }
    }

    double getAverageGrade() const {
        int sum = 0;
        for (int i = 0; i < 5; i++) {
            sum += grades[i];
        }
        return sum / 5.0;
    }

    string getName() const {
        return name;
    }
};

int main() {
    Student s1("pasha");
    Student s2("sasha");

    s1.setGrade(0, 4);
    s1.setGrade(1, 3);
    s1.setGrade(2, 4);
    s1.setGrade(3, 5);
    s1.setGrade(1, 5);

    s2.setGrade(0, 5);
    s2.setGrade(1, 4);
    s2.setGrade(2, 4);
    s2.setGrade(3, 4);
    s2.setGrade(4, 4);

    cout << s1.getName() << " average " << s1.getAverageGrade() << endl;
    cout << s2.getName() << " average " << s2.getAverageGrade() << endl;
}
