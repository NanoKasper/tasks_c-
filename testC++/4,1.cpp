#include <iostream>

using namespace std;

bool isEven(int n) {
    return n % 2 == 0;
}


int main() {
    int number;

    cout << "enter a number: ";
    cin >> number;

    if (isEven(number)) {
        cout << number << " :even" << endl;
    } else {
        cout << number << " :odd" << endl;
    }

    return 0;
}