/*
Eugene Kim
main.cpp
2/14/18
Main file creates objects with input files students and courses then links course objects
with students pointers, then prompts user to input a course number and then prints
students in that course number.
*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "Student.h"
#include "Course.h"

using namespace std;

Student* find(string s, vector<Student*> e)
{
    for (int i = 0; i < e.size(); i++)
    {
        if (s == e[i]->get_name())
        {
            return e[i];
        }
    }
    return 0;
}


int main()
{
    string name;
    int id;
    string course_num;
    string student;
    vector<Student*> enrolled;
    vector<Course*> offered;
    Student* student_pointer;
    Course* course_pointer;
    ifstream in;
/*******************************************************************/
    in.open("students");
    if (!in.is_open())
    {
        cout << "Couldn't open 'students' file.\n";
        return 1;
    }

    in >> name >> id;
    while (!in.eof())
    {
        student_pointer = new Student(name, id);
        enrolled.push_back(student_pointer);

        in >> name >> id;
    }

    in.close();
/********************************************************************/
    in.open("courses");
    if (!in.is_open())
    {
        cout << "Couldn't open 'courses' file.\n";
        return 1;
    }

    in >> student >> course_num;
    while (!in.eof())
    {
        course_pointer = new Course(course_num, find(student, enrolled));
        offered.push_back(course_pointer);

        in >> student >> course_num;
    }

    in.close();
/********************************************************************/

    cout << "To see students, enter course number: ";
    cin >> course_num;
    
    int i;

    for (i = 0; i < offered.size(); i++)
    {
        if (offered[i]->get_num() == course_num)
        {
            offered[i]->print_students();
        }
    }

    for (i = 0; i < enrolled.size(); i++)
    {
        delete enrolled[i];
    }

    for (i = 0; i < offered.size(); i++)
    {
        delete offered[i];
    }
}
