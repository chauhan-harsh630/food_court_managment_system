#include <iostream>
#include<fstream>
#include "../include/Admin.h"

using namespace std;

 void Admin::menu(){
    int choice;
    do{
        cout<<"\n=== ADMIN PORTAL ===\n";
        cout<<"1. Add Food Stall"<<endl;
        cout<<"2. View Food Stall"<<endl;
        cout<<"3. Delete Food Stall"<<endl;
        cout<<"4. Back"<<endl;

        cin >> choice;
        cin.ignore();  // Clear input buffer

        switch(choice){
            case 1:
            addStall();
            break;

            case 2:
            viewStalls();
            break;
            case 3:
            deleteStall();
            break;
            default:
            cout<<"Invalid Choice\n";
        }
    }while(choice != 4);
 }

 void Admin::addStall(){
    ofstream file("data/stalls.txt",ios::app);
    string name;

    cout<<"Enter Stall Name: ";
    cin.ignore();  // Clear input buffer first
    getline(cin, name);  // Read full line including spaces
    file<<name<<endl;
    file.close();
    cout<<"Stall Added successfully\n";
 }

 void Admin::viewStalls(){
    ifstream file("data/stalls.txt");
    string name;
    cout<<"\n=== FOOD STALLS ===\n";

    while(file>>name){
        cout<<name<<endl;
    }
    file.close();
 }

 void Admin::deleteStall(){
    cout<<"Delete Function Comin Soon\n";
 }