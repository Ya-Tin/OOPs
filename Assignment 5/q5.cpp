#include <iostream>
#include <string>
using namespace std;
class Employee {
private:
    string name;
    int id;
public:
    Employee() {
        name = "Unknown";
        id = 0;
    }
    void display() const {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << id << endl;
    }
};
int main() {
    Employee emp;
    emp.display();
    return 0;
}
