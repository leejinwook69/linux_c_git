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
    
    void deposit(int money);
    void withdraw(int money);
    void inquiry();
    void getOwner();
}
