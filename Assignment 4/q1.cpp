#include <iostream>
using namespace std;
class ClassB; 
class ClassA {
    int num1;
public:
    ClassA(int n) : num1(n) {}
    friend void findHighest(ClassA, ClassB);
};
class ClassB {
    int num2;
public:
    ClassB(int n) : num2(n) {}
    friend void findHighest(ClassA, ClassB);
};
void findHighest(ClassA a, ClassB b) {
    if (a.num1 > b.num2)
        cout << "Highest number is: " << a.num1 << endl;
    else
        cout << "Highest number is: " << b.num2 << endl;
}
int main() {
    ClassA a(10);
    ClassB b(20);
    findHighest(a, b);
    return 0;
}
