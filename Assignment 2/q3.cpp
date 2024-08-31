#include <iostream>
using namespace std;
int main(){
    float monthly_salary;
    cout<<"Enter the monthly salary: "<<endl;
    cin>>monthly_salary;
    float tax=0;
    if (monthly_salary<10000){
        if (monthly_salary>7500){
            tax=(0.3)*monthly_salary;
        } else {
            tax=(0.2)*monthly_salary;
        }
    } else {
        tax=(0.4)*monthly_salary;
    }
    cout<<"The Income Tax will be: "<<tax<<endl;
    return 0;
}