#include <iostream>
using namespace std;
int main() {
    float length, width, area, perimeter;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;
    area = length * width;
    perimeter = 2 * (length + width);
    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;
    return 0;
}
