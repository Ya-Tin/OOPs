#include <iostream>
using namespace std;
class Calculator {
private:
    int numOperations;
public:
    Calculator() : numOperations(0) {}
    void add(int a, int b) {
        cout << "Result: " << a + b << endl;
        numOperations++;
    }
    void subtract(int a, int b) {
        cout << "Result: " << a - b << endl;
        numOperations++;
    }
    void multiply(int a, int b) {
        cout << "Result: " << a * b << endl;
        numOperations++;
    }
    void divide(int a, int b) {
        if (b != 0) {
            cout << "Result: " << a / b << endl;
            numOperations++;
        } else {
            cout << "Error: Division by zero" << endl;
        }
    }
    void showOperations() const {
        cout << "Total operations performed: " << numOperations << endl;
    }
};
int main() {
    Calculator calc;
    int a, b;
    char op;
    while (true) {
        cout << "Enter operation (+, -, *, /) or q to quit: ";
        cin >> op;
        if (op == 'q') break;
        cout << "Enter two integers: ";
        cin >> a >> b;
        switch (op) {
            case '+': calc.add(a, b); break;
            case '-': calc.subtract(a, b); break;
            case '*': calc.multiply(a, b); break;
            case '/': calc.divide(a, b); break;
            default: cout << "Invalid operation" << endl;
        }
        calc.showOperations();
    }
    return 0;
}
