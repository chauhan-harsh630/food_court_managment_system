#include <iostream>
#include <limits>
#include "include/Admin.h"
#include "include/FoodStall.h"
#include "include/Customer.h"

using namespace std;

void showWelcome() {
    cout << "========================================\n";
    cout << "   FOOD COURT MANAGEMENT SYSTEM\n";
    cout << "         the_cyberpath\n";
    cout << "========================================\n";
    cout << "Press Enter to continue...";
    cin.get();
}

int main() {
    showWelcome();

    int choice;
    do {
        cout << "\n=== FOOD COURT MANAGEMENT SYSTEM ===\n";
        cout << "1. Admin Portal\n";
        cout << "2. Food Stall Portal\n";
        cout << "3. Customer Portal\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";

        if (!(cin >> choice)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Enter a number.\n";
            continue;
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (choice) {
            case 1: { Admin admin;       admin.menu();     break; }
            case 2: { FoodStall stall;   stall.menu();     break; }
            case 3: { Customer customer; customer.menu();  break; }
            case 4:   cout << "Thank You!\n";              break;
            default:  cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 4);

    return 0;
}