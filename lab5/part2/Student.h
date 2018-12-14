// name
// file name
// date
// description

#ifndef STUDENT_H
#define STUDENT_H

#include <string>

using namespace std;

#include "Person.h"

class Student: public Person
{
protected:
    string major;
public:
    Student();
    Student(string n, string d, string g, string m);
    virtual void print();
};

#endif
