#include <iostream>

using namespace std;

int main() {
    double r;
    double PI = 3.14159;

    cout << "enter radius: ";
    cin >> r;

    double length = 2 * PI * r;
    double area = PI * r * r;

    cout << "length: " << length << endl;
    cout << "area: " << area << endl;
}