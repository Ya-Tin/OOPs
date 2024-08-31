#include <iostream>
using namespace std;
class Number {
private:
    int num1, num2;
    int max() const {
        return (num1 > num2) ? num1 : num2;
    }
public:
    void input() {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
    }
    void display() const {
        cout << "The highest number is: " << max() << endl;
    }
};
int main() {
    Number number;
    number.input();
    number.display();
    return 0;
}
