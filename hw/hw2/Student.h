#ifndef STUDENT_H
#define STUDENT_H

/*
Eugene Kim
Student.h
2/14/18
Header file for Student class
*/

#include <string>

using namespace std;

class Student
{
private:
    string name;
    int id;
public:
    Student(): name(""), id(0) { }
    Student(string n, int i): name(n), id(i) { }
    string get_name();
    int get_id();
};

#endif
