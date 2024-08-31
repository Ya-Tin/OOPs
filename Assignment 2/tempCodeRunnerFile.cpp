#include <iostream>
#include <cmath>
using namespace std;
class Polygon {
private:
    int numSides;
    float sideLength;
public:
    Polygon(int sides = 0, float length = 0.0) : numSides(sides), sideLength(length) {}
    void inputDetails() {
        cout << "Enter the number of sides of the polygon: ";
        cin >> numSides;
        cout << "Enter the length of each side of the polygon: ";
        cin >> sideLength;
    }
    float perimeter() const {
        return numSides * sideLength;
    }
    float area() const {
        if (numSides < 3) return 0;
        return (numSides * sideLength * sideLength) / (4 * tan(M_PI / numSides));
    }
    void displayInfo() const {
        cout << "Number of sides: " << numSides << endl
             << "Length of each side: " << sideLength << endl
             << "Perimeter: " << perimeter() << endl
             << "Area: " << area() << endl;
    }
};
int main() {
    Polygon polygon;
    polygon.inputDetails();
    polygon.displayInfo();
    return 0;
}