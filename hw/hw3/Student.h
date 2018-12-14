#ifndef STUDENT_H
#define STUDENT_H

/*************************************************
Eugene Kim
Student.h
2/5/18
Headerfile which instantiates an object
that has an id, a grade, and 
a course.
*************************************************/

#include <string>

using namespace std;

class Student
{
private:
    int id;
    string grade;
    string course;
public:
    Student(): id(0), grade(""), course("") { }
    Student(int i, string g, string c): id(i), grade(g), course(c) { }
    int get_id();
    string get_grade();
    string get_course();
};

#endif
