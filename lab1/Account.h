#ifndef ACCOUNT_H
#define ACCOUNT_H

// your name
// file name: Account.h
// date
// description

class Account {
private:
    double balance;
    double interest_rate;
public:
    Account();
    Account(double amount, double rate);
    void deposit(double);
    bool withdraw(double); // returns true if enough money, returns false otherwise
    double query();
    void set_interest_rate(double rate);
    double get_interest_rate();
    void add_interest();
};

#endif	
