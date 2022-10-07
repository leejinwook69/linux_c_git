#include <iostream>
#include <string>
#include "account.h"

using namespace std;

Account::Account(string name, int id, int money)
{
    this->name = name;
    this->id = id;
    this->money = money;
}

void Account::deposit(int money)
{
    this->money += money;
}

void Account::withdraw(int money)
{
    this->money -= money;
}

void Account::inquiry()
{
    cout << money;
}

void Account::getOwner()
{
    cout << name;
}
