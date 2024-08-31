#include <iostream>
#include <string>
using namespace std;
class Student
{
    private:
        string name;
        int roll_no;
        int marks;
        static int counter; 
    public:
        Student(string n, int r, int m) 
        {
            name=n;
            roll_no=r;
            marks=m;
            counter++;
        }
        void calculate_grade()
        {
            int grade = 2*marks; 
            cout << "Grade of " << name << "=" << grade << '\n';
        }
        static void countObjects()
        {
            cout << "Number of Students: " << counter << '\n';
        }
};
int Student::counter = 0;
int main()
{
    Student s1("Rayan", 17, 98);
    Student s2("Imran", 63, 7);
    Student s3("Japneet", 61, 0);
    Student s4("Nitay", 63, 83);
    s1.calculate_grade();
    s2.calculate_grade();
    s3.calculate_grade();
    s4.calculate_grade();
    Student::countObjects();
    return 0;
}
