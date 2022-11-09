#pragma once
#include <string>

using namespace std;
class Account
{
private:
    string name;
    int id;
    int money;

public:
    Account(string name, int id, int money);
    
    int deposit(int money);
    int withdraw(int money);
    int inquiry();
    string getOwner();
};
