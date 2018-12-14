/************************************************

                Eugene Kim
        Computer Science II (CSE 202)
                Winter 2018
                  2/19/18
         Lab 5: Inheritance and UML
           Status: 100% Complete

*************************************************

File Name: Person.h
Date: 2/19/18
Description:
Definition of base class Person
in which its interface lays the framework
for an object that stores and outputs values
of its data fields name, dob, and gender.

************************************************/

#ifndef PERSON_H
#define PERSON_H

#include <iostream>

using namespace std;

class Person
{
public:
    Person();
    Person(string n, string d, string g);
    virtual void print();
protected:
    string name;
    string dob;
    string gender;
};

#endif
