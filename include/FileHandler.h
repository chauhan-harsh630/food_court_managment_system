#ifndef FILEHANDLER_H
#define FILEHANDLER_H

#include <string>

using namespace std;
class FileHandler{
    public:
    void addUser(string username, string password);
    void addStall(int id, string name,string category);
    void addFoodItem(string stallId, string foodname,int price);
    void viewUser();
   void viewStalls();
   void viewMenu();
};

#endif