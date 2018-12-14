/*
Eugene Kim
Student.cpp
2/14/18
Implementation of Student class. A student has a name, id,
and courses he/she is enrolled in.
*/

#include <iostream>
#include <string>

#include "Student.h"

using namespace std;

string Student::get_name()
{
    return name;
}

int Student::get_id()
{
    return id;
}
