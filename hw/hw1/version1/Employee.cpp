/****************************************************************
Eugene Kim
Employee.cpp
1/29/18
Implementing class member functions
****************************************************************/

#include "Employee.h"

using namespace std;

//Employee::Employee(string n, double s): name(n), salary(s) { }

Employee::Employee(string n, double s) { name = n; salary = s; }

string Employee::get_name()
{
    return name;
}

double Employee::get_salary()
{
    return salary;
}

void Employee::set_salary(double s)
{
    salary = s;
}
