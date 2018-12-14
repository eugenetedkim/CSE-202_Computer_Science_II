#ifndef COURSE_H
#define COURSE_H

/*
Eugene Kim
Course.h
2/14/18
Header file for Course class
*/

#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

class Course
{
private:
    string num;
    Student* student_pointer;
public:
    Course(string n, Student * s): num(n), student_pointer(s) { };
    string get_num();
    void print_students();
};

#endif
