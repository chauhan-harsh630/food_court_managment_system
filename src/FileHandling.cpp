#include <iostream>
#include <fstream>
#include "../include/FileHandler.h"
using namespace std;


// Add User

void FileHandler::addUser(string username,string password){
    ofstream file("data/users.txt",ios::app);
    file<<username<<" "<<password<<endl;
    file.close();
    cout<<"User Added Successfully\n";
}

// Add Food Item
void FileHandler::addFoodItem(string stallId, string foodname,int price){
    ofstream file("data/menu.txt",ios::app);
    file<<foodname<<" "<<price<<endl;
    file.close();
    cout<<"Food Item Added Successfully\n";
}
//Add Sralls
void FileHandler::addStall(int id, string name,string category){
    ofstream file("data/stalls.txt",ios::app);
    file<<id<<" "<<name<<" "<<category<<endl;
    file.close();
    cout<<"Stall Added Successfully\n";
}
//View Users

void FileHandler::viewUser(){
    ifstream file("data/users.txt");
    string username,password;
    while (file>>username>>password){
        cout<< username
        <<" "
        <<password<<endl;

    }
    file.close();
}

// View Stalls
void FileHandler::viewStalls(){
    ifstream file("data/stalls.txt");
    int id;
    string name,category;

    cout<< "\n=== STALLS ===\n ";
    while(file>>id>>name>>category){
         cout<<"ID "<< id
 <<" | Name: "<<name
 <<" | Category: "<<category<<endl;
    }
    file.close();
}

// View Menu
void FileHandler::viewMenu(){
    ifstream file("data/menu.txt");
    int stallId,price;
    string foodname;

    cout<< "\n=== MENU ===\n ";
    while(file>>stallId>>foodname>>price){
        cout<<"Stall ID: "<<stallId
        <<" | Food: "<<foodname
        <<" | Price: Rs."<<price<<endl;
    }
    file.close();
}