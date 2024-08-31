#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float principal, rate, time, num_time, compoundInterest;
    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter annual interest rate (in %): ";
    cin >> rate;
    cout << "Enter time (in years): ";
    cin >> time;
    cout<<"Enter the number of times rate is applied in one year: ";
    cin>> num_time;
    // Convert rate from percentage to decimal
    rate = rate / 100;
    compoundInterest = principal * pow((1 + rate),num_time*time) - principal;
    cout << "The Compound Interest will be: " << compoundInterest << endl;
    return 0;
}
