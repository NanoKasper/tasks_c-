#include <iostream>

using namespace std;

int main() {
    string input;

    cout << "enter a string: ";
    getline(cin, input);

    cout << "length: " << input.length() << endl;

    if(!input.empty()) {
        cout << "first character: " << input[0] << endl;
    } else {
        cout << "string is empty" << endl;
    }
    return 0;
}