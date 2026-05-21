#include<iostream>
#include<fstream>
#include "../include/Customer.h"
using namespace std;
void Customer::menu(){
 int choice;
do {
   cout<<"\n--- CUSTOMER PANEL ---\n";
cout<<"1. View Menu\n";
cout<<"2. Back\n";
cin >> choice;
switch(choice){
    case 1: 
    viewMenu();
    break;
} 

} while (choice > 2);
}

void Customer::viewMenu(){
    ifstream file("data/menu.txt");
    string item;
    int price;
    while (file>>item>>price)
    {
           cout << item << " - Rs." << price << endl;
    }
    file.close();
}

