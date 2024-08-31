#include <iostream>
using namespace std;

class Arithmetic {
    float a, b;
public:
    Arithmetic(float x, float y) : a(x), b(y) {}
    void add() { cout << "Sum: " << a + b << endl; }
    void subtract() { cout << "Difference: " << a - b << endl; }
    void multiply() { cout << "Product: " << a * b << endl; }
    void divide() {
        if (b != 0)
            cout << "Quotient: " << a / b << endl;
        else
            cout << "Division by zero error" << endl;
    }
};

int main() {
    float num1, num2;
    cout << "Enter first operand: ";
    cin >> num1;
    cout << "Enter second operand: ";
    cin >> num2;
    
    Arithmetic ar(num1, num2);
    ar.add();
    ar.subtract();
    ar.multiply();
    ar.divide();
    
    return 0;
}
