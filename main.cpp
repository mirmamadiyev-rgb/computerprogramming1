#include <iostream>
using namespace std;


//problem7
/*
double findprice(int hours) {
    double fee = 0.0;
    if (hours <= 2) {fee = 0.0;}
    else if (hours <= 5) {fee = (hours - 2) * 2.0; }
     else {fee = (3 * 2.0) + (hours - 5) * 5.0; }
    return fee;
}
int main() {
    int hours;
    char choice = 'Y';
    while (choice == 'Y' || choice == 'y') {
        cout << "Enter the number of hours parked: ";
        cin >> hours;
        if (hours < 0) {cout << "Invalid input. Hours cannot be negative." << endl; }
        else {double fee = findprice(hours);
            cout << "Parking fee: $" << fee << endl;
        }
        cout << "\nDo you want to process another customer? (Y/N): ";
        cin >> choice;
        cout << endl;
    }
    cout << "Thank you for using the Parking Fee Calculator!" << endl;
    return 0;
}  */

//problem6
/*
double calculateTotal(int numTickets, double pricePerTicket) {
    return numTickets * pricePerTicket;}
int main() {
    int choice, tickets;
    double price, total;
    char again;
    do {
        cout << "<<<<<<<<<<< Movie Ticket Booking System >>>>>>>>> " << endl;
        cout << "1. Movie A is $8 for a ticket" << endl;
        cout << "2. Movie B is $10 for a ticket" << endl;
        cout << "3. Movie C is $12 for a ticket" << endl;
        cout << "\nEnter your choice (1-3): ";
        cin >> choice;
        switch (choice) {
            case 1:price = 8.0;
                cout << "You selected Movie A." << endl;break;
            case 2:price = 10.0;
                cout << "You selected Movie B." << endl;break;
            case 3:price = 12.0;
                cout << "You selected Movie C." << endl;break;
            default:cout << "Invalid choice. Please select 1–3." << endl;
                price = 0.0;
        }
        if (price > 0) {
            cout << "Enter number of tickets: ";
            cin >> tickets;
            if (tickets < 1) {cout << "Invalid number of tickets." << endl;}
            else {total = calculateTotal(tickets, price);
                cout << "Total cost: $" << total << endl;}
        }
        cout << "\nWould you like to book another movie? (Y/N): ";
        cin >> again;
        cout << endl;
    }
    while (again == 'Y' || again == 'y');
    cout << "Thank you for using the Movie Ticket Booking System!" << endl;
    return 0;
}  */



//problem8

double Totalprice(int quantity, double pricePerItem) {
    return quantity*pricePerItem;
}
int main() {
    int choice, quantity;
    double price, totalBill = 0.0;
    char moreOrders;
    do {
        cout << "<<<<<<<<<<< Restaurant Menu >>>>>>>>> " << endl;
        cout << "1. Pizza - $10" << endl;
        cout << "2. Burger - $8" << endl;
        cout << "3. Salad - $5" << endl;
        cout << "\nEnter your choice (1-3): ";
        cin >> choice;
        switch (choice) {
            case 1:
                price = 10.0;
                cout << "You selected Pizza." << endl;
                break;
            case 2:
                price = 8.0;
                cout << "You selected Burger." << endl;
                break;
            case 3:
                price = 5.0;
                cout << "You selected Salad." << endl;
                break;
            default:
                cout << "Please select bwetween  1 and 3 !" << endl;
                price = 0.0;
        }
        if (price > 0) {
            cout << "Enter quantity: ";
            cin >> quantity;
            if (quantity < 1) {
                cout << "Invalid quantity. Must be at least 1." << endl;
            } else {
                double total = Totalprice(quantity, price);
                totalBill += total;
                cout << "Item total: $" << total << endl;
            }
        }
        cout << "\nWould you like to order other foods? Yes or No : ";
        cin >> moreOrders;
        cout << endl;
    } while (moreOrders == 'Y' || moreOrders == 'y');
    cout << "==============================" << endl;
    cout << "Total Bill: $" << totalBill << endl;
    cout << "Thank you for dining with us!" << endl;
    return 0;
}