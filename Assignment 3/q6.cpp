#include <iostream>
using namespace std;
void printPyramid(int n) {
    cout << "Simple Pyramid:" << endl;
    for (int i = 1; i <= n; ++i) {
        for (int j = i; j < n; ++j) cout << " ";
        for (int k = 1; k <= (2 * i - 1); ++k) cout << "*";
        cout << endl;
    }   
    cout << "\nInverted Pyramid:" << endl;
    for (int i = n; i >= 1; --i) {
        for (int j = n; j > i; --j) cout << " ";
        for (int k = 1; k <= (2 * i - 1); ++k) cout << "*";
        cout << endl;
    }
}
int main() {
    int n;
    cout << "Enter the number of rows for the pyramid: ";
    cin >> n;
    printPyramid(n);
    return 0;
}
