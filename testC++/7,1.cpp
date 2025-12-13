#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream outfile("output.txt");

    if(!outfile) {
        cout << "error opening file!" << endl;
        return 1;
    }

    outfile << "hello, file i/o";
    outfile.close();
    cout << "written to file" << endl;

    return 0;
}