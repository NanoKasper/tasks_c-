#include <iostream>
//#include <string>

using namespace std;

class Animal {
protected:
    string name;

public:
    void sound() {
        cout << "some sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() {
        cout << "woof" << endl;
    }
};

int main() {
    Dog dog;
    dog.sound();

    return 0;
}