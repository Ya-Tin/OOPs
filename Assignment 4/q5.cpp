#include <iostream>
using namespace std;
class TicBooth{
    int peopleVisited;
    float totalMoney;
    public:
    TicBooth(): peopleVisited(0), totalMoney(0.0) {}
    void incrementPeopleOnly(){
        peopleVisited++;
    }
    void sellTicket(){
        peopleVisited++;
        totalMoney+=2.50;
    }
    void displayTotals(){
        cout << "Total people visited: " << peopleVisited << endl;
        cout << "Total money collected: Rs. " << totalMoney << endl;
    }
    void displayTicketsSold() {
        cout << "Total tickets sold: " << peopleVisited << endl;
    }
};
int main(){
    TicBooth booth;
    booth.incrementPeopleOnly();
    booth.sellTicket();
    booth.sellTicket();
    booth.displayTotals();
    booth.displayTicketsSold();
    return 0;
}