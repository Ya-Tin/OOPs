#include <iostream>
using namespace std;
int main() {
    int a, b, c, d;
    cout << "Enter four numbers: ";
    cin >> a >> b >> c >> d;
    int maximum = (a >= b && a >= c && a >= d) ? a :
              (b >= c && b >= d) ? b :
              (c >= d) ? c : d;
    cout << "The largest number is: " << maximum << endl;
    return 0;
}
