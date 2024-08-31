#include <iostream>
using namespace std;
int factorialNumber(int n){
    if (n<=1){
        return 1;
    } else {
        return n*factorialNumber(n-1);
    }
}
int main(){
    int number;
    cout<<"Enter the number: "<<endl;
    cin>>number;
    int result=factorialNumber(number);
    cout<<"The Factorial of "<<number<<" is "<<result<<endl;
    return 0;
}