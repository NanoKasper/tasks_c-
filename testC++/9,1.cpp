#include <iostream>
#include <string>

using namespace std;

class Book {
private:
    string title;
    int year;

public:
    void setTitle(const string& x) {
        title = x;
    }

    void setYear(int y) {
        year = y;
    }

    string getTitle() const {
        return title;
    }

    int getYear() const {
        return year;
    }
};

int main() {
    Book book;

    book.setTitle("first law");
    book.setYear(2006);

    cout << "title: " << book.getTitle() << endl;
    cout << "year: " << book.getYear() << endl;
    
    return 0;
}