#include <iostream>
using namespace std;
class Calculator {
public:
    inline int sum(int a, int b, int c) {
        return a + b + c;
    }
};
int main() {
    Calculator calc;
    int x, y, z;
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;
    cout << "Sum of the three numbers is: " << calc.sum(x, y, z) << endl;
    return 0;
}
