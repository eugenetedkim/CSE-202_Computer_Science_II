// name
// file name
// date
// description

#include <iostream>

using namespace std;

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
