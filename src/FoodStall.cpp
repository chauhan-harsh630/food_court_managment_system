#include <iostream>
#include <fstream>
#include "../include/FoodStall.h"

using namespace std;

void FoodStall::menu(){
    int choice;
    do{
        cout<<"--- FOOD STALL PANEL ---\n";
        cout<<"1.Add Food Item\n";
         cout<<"2.View Food Item\n";
          cout<<"3. Back\n";
          cin >> choice;

          switch(choice){
            case 1:
            addFoodItem();
            break;
            case 2:
            viewFoodItems();
            break;
            default:
            cout<<"Invalid Choice\n";
          }
    }while(choice != 3);

}

void FoodStall::addFoodItem(){
  ofstream file("data/menu.txt",ios::in);
  string item;
  int price;
  cout<<"Enter Food Name: ";
  cin>>item;
  cout<<"Enter Price: ";
  cin>>price;
  file<<item<<" "<<price<<endl;
  file.close();
  cout<<"Food Added Successfully\n";
}
void FoodStall::viewFoodItems(){
  ifstream file("data/menu.txt", ios::in);
  string item;
  int price;
  while(file>>item>>price){
    cout << item << " - Rs." << price << endl; 
  }
  file.close();
}