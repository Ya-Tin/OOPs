#include <iostream>
#include <string>
using namespace std;
class Book {
private:
    string title;
    string author;
    int year;
public:
    void input() {
        cout << "Enter book title: ";
        getline(cin, title);
        cout << "Enter book author: ";
        getline(cin, author);
        cout << "Enter publication year: ";
        cin >> year;
        cin.ignore();  
    }
    void display() const {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Year: " << year << endl;
    }
};
int main() {
    int n;
    cout << "Enter number of books: ";
    cin >> n;
    cin.ignore();  
    Book* books = new Book[n]; 
    for (int i = 0; i < n; ++i) {
        cout << "Enter details for book " << i + 1 << ":" << endl;
        books[i].input();
    }
    cout << "\nBook Records:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Details of book " << i + 1 << ":" << endl;
        books[i].display();
        cout << endl;
    }
    delete[] books; 
    return 0;
}
