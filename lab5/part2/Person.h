// name
// file name
// date
// description

#ifndef PERSON_H
#define PERSON_H

#include <string>

using namespace std;

class Person
{
protected:
    string name;
    string dob;
    string gender;
public:
    Person();
    Person(string n, string d, string g);
    virtual void print();
};

#endif
