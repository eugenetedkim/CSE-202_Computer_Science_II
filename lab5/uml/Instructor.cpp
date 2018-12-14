/*
Name: Eugene Kim
File Name: Instructor.cpp
Date: 2/19/18
Description:
Implementation of derived class Instructor which
sets inherited data field values from base class
Person and its own data field values for salary.
Print function that calls print function from
base class Person and outputs its own data field
values is defined.
*/

#include "Instructor.h"

Instructor::Instructor()
    : Person()
{
    salary = 0;
}

Instructor::Instructor(string n, string d, string g, int s)
    : Person(n, d, g)
{
    salary = s;
}

void Instructor::print()
{
    if (gender == "M")
    {
        cout << "Mr. ";
    }
    else
    {
        cout << "Ms. ";
    }
    Person::print();
    cout << "Instructor, Salary: " << salary << endl;
}
