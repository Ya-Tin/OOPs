#include <iostream>
using namespace std;
void swap(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int a, b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"Before Swapping: first number="<<a<<", second number="<<b<<endl;
    swap(a,b);
    cout<<"After Swapping: first number="<<a<<", second number="<<b<<endl;
    return 0;
}