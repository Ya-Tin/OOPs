#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string name;
    int rollNum;
    float marks;

public:
    Student() : name(""), rollNum(0), marks(0.0) {}
    Student(string n, int r, float m) : name(n), rollNum(r), marks(m) {}
    void inputDetails() {
        cout << "Enter name of the student: ";
        getline(cin, name);
        cout << "Enter the roll number of the student: ";
        cin >> rollNum;
        cout << "Enter the marks of the student: ";
        cin >> marks;
        cin.ignore();
    }
    char calculatedGrade() const {
        if (marks >= 85) return 'A';
        else if (marks >= 70) return 'B';
        else if (marks >= 55) return 'C';
        else if (marks >= 40) return 'D';
        else return 'F';
    }
    void display() const {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNum << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculatedGrade() << endl;
    }
};
int main() {
    Student student;
    student.inputDetails();
    student.display();
    return 0;
}
