#include<iostream>
#include "include/Admin.h"
#include "include/FoodStall.h"
#include "include/Customer.h"   
using namespace std;

int main(){
    int choice;

    do {
        cout<<"\n=== FOOD COURT MANAGEMENT SYSTEM ===\n";

        cout<<"1. Admin Portal"<<endl;
        cout<<"2. Food Stall Portal"<<endl;
        cout<<"3. Customer Portal"<<endl;
        cout<<"2. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){
            case 1:{
                Admin admin;
                admin.menu();
                break;
            }
            case 2:{
                FoodStall foodStall;
                foodStall.menu();
                break;
            }
            case 3:{
                Customer customer;
                customer.menu();
                break;
            }
            case 4: {
                cout<< "Thank You!\n";
                break;
            }
            default:
            cout<<"Invalid Choice\n";
        }

    }while (choice  > 5);
   return 0;
}