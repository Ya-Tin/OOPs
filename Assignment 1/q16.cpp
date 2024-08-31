#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    // Bitwise AND
    int andResult = a & b;
    cout << "Bitwise AND (&): " << a << " & " << b << " = " << andResult << endl;
    // Bitwise OR
    int orResult = a | b;
    cout << "Bitwise OR (|): " << a << " | " << b << " = " << orResult << endl;
    // Bitwise XOR
    int xorResult = a ^ b;
    cout << "Bitwise XOR (^): " << a << " ^ " << b << " = " << xorResult << endl;
    // Bitwise Shift Left
    int shiftLeftResultA = a << 1;  
    int shiftLeftResultB = b << 1;  
    cout << "Bitwise Shift Left (<<): " << a << " << 1 = " << shiftLeftResultA << endl;
    cout << "Bitwise Shift Left (<<): " << b << " << 1 = " << shiftLeftResultB << endl;
    // Bitwise Shift Right
    int shiftRightResultA = a >> 1; 
    int shiftRightResultB = b >> 1; a
    cout << "Bitwise Shift Right (>>): " << a << " >> 1 = " << shiftRightResultA << endl;
    cout << "Bitwise Shift Right (>>): " << b << " >> 1 = " << shiftRightResultB << endl;
    return 0;
}
