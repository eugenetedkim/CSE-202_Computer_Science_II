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
    members.push_back(e);
}

void Staff::raise_salary(string n, int percent)
{
    double salary;

    int i = find(n);
    if (i == -1)
    {
        cout << "Couldn't find " << n << endl;
    }
    else
    {
        salary = members[i].get_salary();
        salary += salary * percent/100;
        members[i].set_salary(salary);
    }
}

void Staff::print()
{
    for (int i = 0; i < members.size(); i++)
    {
        cout << members[i].get_name() << " " << members[i].get_salary() << endl;
    }
}
