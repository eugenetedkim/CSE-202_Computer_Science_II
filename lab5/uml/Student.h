/*
Name: Eugene Kim
File Name: Student.h
Date: 2/19/18
Description:
Definition of derived class Student
in which its interface, derived from class Person
lays the framework for an object that stores and outputs values
of its inherited data fields and its own additional data field
called major.
*/

#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student : public Person 
{
public:
    Student();
    Student(string n, string d, string g, string m);
    virtual void print();
protected:
    string major;
};

#endif
