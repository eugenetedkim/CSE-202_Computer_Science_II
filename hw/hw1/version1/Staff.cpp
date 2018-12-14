/****************************************************************
Eugene Kim
Staff.cpp
1/29/18
Implementing class member functions
****************************************************************/

#include <iostream>
#include <string>
#include <vector>

#include "Staff.h"

using namespace std;

int Staff::find(string n)
{
    for (int i = 0; i < members.size(); i++)
    {
        if (members[i].get_name() == n)
        {
            return i;
        }
    }
    return -1;
}

void Staff::add_employee(Employee e)
{
    string n = e.get_name();
    int i = find(n);
    if (i == -1)
    {
        members.push_back(e);
    }
    else
    {
        cout << "ERROR: Please check for duplicate records!" << endl;
    }
}

void Staff::raise_salary(string n, int percent)
{
    double salary, raise, min_raise;

    int i = find(n);
    if (i == -1)
    {
        cout << "Couldn't find " << n << endl;
    }
    else
    {
        salary = members[i].get_salary();
        raise = salary  * percent/100;
        min_raise = 1000;
        if (raise > 1000)
        {
            salary = salary + min_raise;
            members[i].set_salary(salary);
        }
        else
        {
            salary += salary * percent/100; 
            members[i].set_salary(salary);
        }
    }
}

void Staff::print()
{
    for (int i = 0; i < members.size(); i++)
    {
        cout << members[i].get_name() << " " << members[i].get_salary() << endl;
    }
}
