#include <iostream>
using namespace std;
class MyClass {
private:
    static int objectCount;
public:
    MyClass() {
        objectCount++; 
    }

    ~MyClass() {
        objectCount--;
    }
    static int getObjectCount() {
        return objectCount;
    }
};
int MyClass::objectCount = 0;
int main() {
    MyClass obj1, obj2;
    cout << "Number of objects: " << MyClass::getObjectCount() << endl;
    {
        MyClass obj3;
        cout << "Number of objects: " << MyClass::getObjectCount() << endl;
    }
    cout << "Number of objects: " << MyClass::getObjectCount() << endl;
    return 0;
}
