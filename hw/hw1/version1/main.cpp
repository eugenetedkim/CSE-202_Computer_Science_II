/****************************************************************
Eugene Kim
main.cpp
1/29/18
Reads input from file and checks if any duplicate records,
preventing user input file from adding an already existing
name. Program proceeds to update salary according to percent
if desired.
****************************************************************/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "Employee.h"
#include "Staff.h"

using namespace std;

int main()
{
    Staff company;
    string name;
    double salary;

    ifstream in("main.in");
    if (!in.is_open())
    {
        cout << "Couldn't open 'main.in'\n";
        exit(1);
    }

    in >> name >> salary;
    while (!in.eof())
    {
        company.add_employee(Employee(name, salary));

        in >> name >> salary;
    }

    string response;
    int percent;

    cout << "Raise anybody's salary? ";
    cin >> response;
    while (response == "yes" or response == "y")
    {
        cout << "Enter name and percent ";
        cin >> name >> percent;
        company.raise_salary(name, percent);

        cout << "Raise anybody else's salary? ";
        cin >> response;
    }

    company.print();
}


