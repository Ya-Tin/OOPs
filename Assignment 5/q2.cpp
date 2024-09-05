#include <iostream>
#include <iomanip>
using namespace std;
class Date {
private:
    int day, month, year;
public:
    Date(int d, int m, int y){
        day=d;
        month=m;
        year=y;
    }
    void incrementDay() {
        static int const daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        day++;
        if (day > daysInMonth[month - 1]) {
            day = 1;
            month++;
            if (month > 12) {
                month = 1;
                year++;
            }
        }
    }
    void printDate() const {
        cout <<month << "/"<< day << "/"<< year << endl;
    }
};
int main() {
    int d, m, y;
    cout << "Enter today's date (mm/dd/yy): ";
    char slash;
    cin >> m >> slash >> d >> slash >> y;
    Date today(d, m, y);
    cout << "Today's date is: ";
    today.printDate();
    today.incrementDay();
    cout << "Tomorrow's date is: ";
    today.printDate();
    return 0;
}
