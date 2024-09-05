#include <iostream>
using namespace std;

class MyClass {
private:
    int value;
public:
    MyClass(int v) : value(v) {} 
    MyClass(const MyClass &other){ 
        value=other.value;
        cout << "Copy constructor called" << endl;
    }

    void display() const {
        cout << "Value: " << value << endl;
    }
};

int main() {
    MyClass obj1(10); 
    MyClass obj2 = obj1;
    obj1.display();
    obj2.display();

    return 0;
}
