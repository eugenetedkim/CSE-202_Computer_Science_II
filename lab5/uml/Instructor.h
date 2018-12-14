/*
Name: Eugene Kim
File Name: Instructor.h
Date: 2/19/18
Description:
Interface definition of derived class Instructor
which lays the framework for an Instructor object
that contains inherited data field values from 
base class Person and its own
which is salary.
*/

#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"

class Instructor : public Person
{
public:
    Instructor();
    Instructor(string n, string d, string g, int s);
    virtual void print();
protected:
    int salary;
};

#endif
