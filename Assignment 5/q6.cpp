#include <iostream>
using namespace std;
class Box {
private:
    int length;
public:
    Box(int len){
        length=len;
    }
    void display() const {
        cout << "Length: " << this->length << endl;
    }
};
int main() {
    Box b1(10), b2(20), b3(15);
    b1.display();
    b2.display();
    b3.display();
    return 0;
}
