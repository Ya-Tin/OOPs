#include <iostream>
using namespace std;
int main() {
    int a = 5, b = 10, c = 15;
    int result;
    result = a + b * c; 
    cout << "a + b * c = " << result << endl;
    result = (a + b) * c; 
    cout << "(a + b) * c = " << result << endl;
    result = a - b + c; 
    cout << "a - b + c = " << result << endl;
    result = a - (b + c); 
    cout << "a - (b + c) = " << result << endl;
    result = a * b / c; 
    cout << "a * b / c = " << result << endl;
    result = a / b * c; 
    cout << "a / b * c = " << result << endl;
    return 0;
}
