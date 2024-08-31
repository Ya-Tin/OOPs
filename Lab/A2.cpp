#include <iostream>
using namespace std;
class Car
{
    private:
        string make;
        string model;
        int year;
        int speed;
    public:
        Car(string m, string mm, int y, int s){
            make=m;
            model=mm;
            year=y;
            speed=s;
        }
        void calculate_acc(){
            
        }
}
int main(){
    Car c1("Maruti", "LXI", 2002, 60)
}