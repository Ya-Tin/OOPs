#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string name;
    int rollNo;
public:
    void input() {
        cout << "Enter student name: ";
        getline(cin, name);
        cout << "Enter roll number: ";
        cin >> rollNo;
        cin.ignore();  
    }
    void display() const {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
    }
};
int main() {
    Student student;
    Student* ptr = &student; 
    cout << "Enter student data:" << endl;
    ptr->input();
    cout << "\nStudent Data:" << endl;
    ptr->display();
    return 0;
}
