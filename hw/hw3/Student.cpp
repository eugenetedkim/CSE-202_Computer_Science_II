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

int Student::get_id()
{
    return id;
}

string Student::get_grade()
{
    return grade;
}

string Student::get_course()
{
    return course;
}
