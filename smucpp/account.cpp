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

int Account::deposit(int money)
{
    this->money += money;
    return this->money;
}

int Account::withdraw(int money)
{
    this->money -= money;
    return this->money;
}

int Account::inquiry()
{
    return money;
}

string Account::getOwner()
{
    return name;
}
