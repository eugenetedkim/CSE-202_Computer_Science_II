/*
Name: Eugene Kim
File Name: Student.cpp
Date: 2/19/18
Description:
Implementation of derived class Student
where both inherited and derived data fields
are set. Print function which calls the print function
of the inherited base class and outputs derived
data field value is defined.*/

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
