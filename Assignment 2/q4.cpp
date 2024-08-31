#include <iostream>
using namespace std;

int main() {
    int n;  
    int i = 0;  
    int sum = 0;  
    cout << "Enter the number: " << endl;
    cin >> n;
    do {
        i++;       
        sum += i;  
    } while (i < n);  
    cout << "The Sum of the first " << n << " natural numbers is: " << sum << endl;
    return 0;
}
