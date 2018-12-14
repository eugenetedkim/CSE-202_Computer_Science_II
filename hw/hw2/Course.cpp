/*
Eugene Kim
Course.cpp
2/14/18
Implementation of Course class. A course has a number, and
students. The class also has a method to store pointers of
type Student.
*/

#include <vector>
#include <string>

#include "Course.h"
#include "Student.h"

string Course::get_num()
{
    return num;
}

void Course::print_students()
{
    cout << student_pointer->get_name() << endl;
}
