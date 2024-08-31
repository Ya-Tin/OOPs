#include <iostream>
using namespace std;
int summer(int a, int b, int c){
    int sum=a+b+c;
    return sum;
}
int main(){
    int a, b, c;
    cout<<"Enter the first number: "<<endl;
    cin>>a;
    cout<<"Enter the second number: "<<endl;
    cin>>b;
    cout<<"Enter the third number: "<<endl;
    cin>>c;
    cout<<"The Sum will be: "<<summer(a,b,c);
    return 0;
}