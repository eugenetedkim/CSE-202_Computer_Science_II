/*
Name: Eugene Kim
File Name: Person.cpp
Date: 2/19/18
Description:
Implementation of base class Person
where default Person data field values are set
and where default print function is defined.
*/

#include "Person.h"

Person::Person()
{
    name = " ";
    dob = " ";
    gender = " ";
}

Person::Person(string n, string d, string g)
{
    name = n;
    dob = d;
    gender = g;
}

void Person::print()
{
    cout << name << " " << dob << endl;
}
