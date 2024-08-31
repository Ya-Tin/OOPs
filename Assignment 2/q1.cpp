#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter first number:  "<<endl;
    cin>>a;
    cout<<"Enter second number: "<<endl;
    cin>>b;
    int larger= (a>b)?a:b;
    cout<<"The bigger number is "<<larger<<endl;
    return 0;
}