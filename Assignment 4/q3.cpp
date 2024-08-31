#include <iostream>
using namespace std;
class Factorial {
    long long fact;
public:
    Factorial(int n);
    void display();
};
Factorial::Factorial(int n) {
    fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
}
void Factorial::display() {
    cout << "Factorial: " << fact << endl;
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    Factorial f(num);
    f.display();
    return 0;
}
