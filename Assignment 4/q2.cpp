#include <iostream>
using namespace std;
class B; 
class A {
    int x;
public:
    A(int val) : x(val) {}
    friend void showValue(A, B);
};
class B {
    int y;
public:
    B(int val) : y(val) {}
    friend void showValue(A, B);
};
void showValue(A a, B b) {
    cout << "Value in A: " << a.x << endl;
    cout << "Value in B: " << b.y << endl;
}
int main() {
    A a(10);
    B b(20);
    showValue(a, b);
    return 0;
}
