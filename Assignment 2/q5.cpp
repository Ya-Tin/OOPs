#include <iostream>
using namespace std;
int fibonnaciNums(int n){
    if (n==1 || n==2){
        return 1;
    } else {
        return fibonnaciNums(n-1)+fibonnaciNums(n-2);
    }
}

int main(){
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    cout<<"The "<<n<<"th fibonnaci number will be: "<<fibonnaciNums(n)<<endl;
    return 0;
}