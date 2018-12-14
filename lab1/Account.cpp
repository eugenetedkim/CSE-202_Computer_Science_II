// your name
// file name: Account.cpp
// date
// description

#include <iostream>

#include "Account.h"

using namespace std;

Account::Account(): balance(0), interest_rate(0) { }

Account::Account(double amount, double rate): balance(amount), interest_rate(rate) { }

void Account::deposit(double amount)
{
    balance += amount;
}

bool Account::withdraw(double amount)
{
    bool status;

    if (amount > balance) {
        balance -= 5; // penalty
        status = false;
    } else {
        balance -= amount;
        status = true;
    }

    return status;
}

double Account::query()
{
    return balance;
}

void Account::set_interest_rate(double rate)
{
    interest_rate = rate;
}

double get_interest_rate();
    

    
