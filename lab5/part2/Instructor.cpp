// name
// file name
// date
// description

#include <iostream>

using namespace std;

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
