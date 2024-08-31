#include <iostream>
using namespace std;
class TicBooth {
private:
    int peopleVisited;
    double totalAmount;
    int ticketsSold;
    static const double TICKET_PRICE;
public:
    TicBooth() : peopleVisited(0), totalAmount(0.0), ticketsSold(0) {}
    void visitBooth(bool ticketSoldOut) {
        peopleVisited++;
        if (!ticketSoldOut) {
            totalAmount += TICKET_PRICE;
            ticketsSold++;
        }
    }
    void displayTotals() const {
        cout << "Number of people visited: " << peopleVisited << endl;
        cout << "Total amount collected: Rs." << totalAmount << endl;
    }
    void displayTicketsSold() const {
        cout << "Number of tickets sold: " << ticketsSold << endl;
    }
};
const double TicBooth::TICKET_PRICE = 2.50;
int main() {
    TicBooth booth;
    char choice;
    do {
        bool ticketSoldOut;
        cout << "Is the ticket sold out? (y/n): ";
        cin >> choice;
        if (choice == 'y' || choice == 'Y') {
            ticketSoldOut = true;
        } else if (choice == 'n' || choice == 'N') {
            ticketSoldOut = false;
        } else {
            cout << "Invalid input. Assuming ticket is not sold out." << endl;
            ticketSoldOut = false;
        }
        booth.visitBooth(ticketSoldOut);
        cout << "Do you want to enter another person? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    booth.displayTotals();
    booth.displayTicketsSold();
    return 0;
}
