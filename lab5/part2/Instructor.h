// name
// file name
// date
// description

#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include <string>

using namespace std;

#include "Person.h"

class Instructor: public Person
{
protected:
    int salary;
public:
    Instructor();
    Instructor(string n, string d, string g, int s);
    virtual void print();
};

#endif
