#include <iostream>
using namespace std;
int main() {
    float principal, rate, time, simpleInterest;
    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter rate of interest: ";
    cin >> rate;
    cout << "Enter time (in years): ";
    cin >> time;
    simpleInterest = (principal * rate * time) / 100;
    cout << "The Simple Interest will be: " << simpleInterest << endl;
    return 0;
}
