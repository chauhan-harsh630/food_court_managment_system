#include <iostream>
#include <fstream>
#include <string>
#include <limits>
#include "../include/Admin.h"

using namespace std;

void Admin::menu() {
    int choice = 0;
    do {
        cout << "\n=== ADMIN PORTAL ===\n";
        cout << "1. Add Food Stall\n";
        cout << "2. View Food Stalls\n";
        cout << "3. Delete Food Stall\n";
        cout << "4. Back\n";
        cout << "Enter choice: ";

        if (!(cin >> choice)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input.\n";
            continue;
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clear once, here

        switch (choice) {
            case 1: addStall();   break;
            case 2: viewStalls(); break;
            case 3: deleteStall();break;
            case 4: cout << "Returning to main menu...\n"; break;
            default: cout << "Invalid choice.\n";
        }
    } while (choice != 4);
}

void Admin::addStall() {
    string name;
    cout << "Enter Stall Name: ";
    getline(cin, name);  // cin.ignore() already called in menu()

    if (name.empty()) {
        cout << "Stall name cannot be empty.\n";
        return;
    }

    ofstream file("data/stalls.txt", ios::app);
    if (!file.is_open()) {
        cout << "Error: Could not open stalls file.\n";
        return;
    }

    file << name << "\n";
    file.close();
    cout << "Stall '" << name << "' added successfully.\n";
}

void Admin::viewStalls() {
    ifstream file("data/stalls.txt");
    if (!file.is_open()) {
        cout << "No stalls found.\n";
        return;
    }

    string name;
    int count = 0;
    cout << "\n=== FOOD STALLS ===\n";

    while (getline(file, name)) {
        if (!name.empty()) {
            cout << ++count << ". " << name << "\n";
        }
    }

    if (count == 0) cout << "No stalls registered yet.\n";
    file.close();
}

void Admin::deleteStall() {
    // TODO: implement delete by stall name/ID
    cout << "Delete feature coming soon.\n";
}