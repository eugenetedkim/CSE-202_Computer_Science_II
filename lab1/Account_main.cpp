// your name
// file name: Account_main.cpp
// date
// description

#include <iostream>

#include "Account.h"

using namespace std;

int main()
{
    Account savings(100, 5);

    savings.deposit(20);
    cout << savings.query() << endl;

    if (savings.withdraw(50))
        cout << savings.query() << endl;
    else cout << "Not enough funds, $5 penalty charged.\n";
    cout << savings.query() << endl;

    if (savings.withdraw(80))
        cout << "Successful withdraw.\n";
    else cout << "Not enough funds, $5 penalty charged.\n";
    cout << savings.query() << endl;
}
