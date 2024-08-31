#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class Car {
private:
    string make;
    string model;
    int year;
    int speed;
public:
    Car(string mmake = "", string mmodel = "", int yyear = 0, int sspeed = 0)
        : make(mmake), model(mmodel), year(yyear), speed(sspeed) {}
    void inputDetails() {
        cout << "Enter the make of the car: ";
        getline(cin, make);
        cout << "Enter the model of the car: ";
        getline(cin, model);
        cout << "Enter the year of manufacture: ";
        cin >> year;
        cout << "Enter the initial speed of the car: ";
        cin >> speed;
        cin.ignore();  
    }
    void displayInfo() const {
        cout << "Make: " << make << endl
             << "Model: " << model << endl
             << "Year: " << year << endl
             << "Speed: " << speed << " km/h" << endl;
    }
    void accelerate(int increment) {
        speed += increment;
        cout << "Accelerated to " << speed << " km/h" << endl;
    }
    void brake(int decrement) {
        speed = max(0, speed - decrement);
        cout << "Slowed down to " << speed << " km/h" << endl;
    }
};
int main() {
    Car car;
    car.inputDetails();
    car.displayInfo();
    car.accelerate(50);
    car.brake(20);
    return 0;
}