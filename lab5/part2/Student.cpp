// name
// file name
// date
// description

#include <iostream>

using namespace std;

#include "Student.h"

Student::Student()
    : Person()
{
    major = " ";
}

Student::Student(string n, string d, string g, string m)
    : Person(n, d, g)
{
    major = m;
}

void Student::print()
{
    Person::print();
    cout << "Student, Major: " << major << endl;
}
