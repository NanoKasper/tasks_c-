#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream infile("output.txt");

    if (!infile) {
        cout << "error" << endl;
        return 1;
    }

    string line;
    while (getline(infile, line)) {
        cout << line << endl;
    }
    infile.close();
    return 0;
}