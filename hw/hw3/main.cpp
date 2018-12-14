/**********************************************************
 * Name: Eugene Kim
 * File Name: main.cpp
 * Date: 3/5/18
 * Description: This program opens 'classes.txt' and
 * streams in the class names. For every class name,
 * the program opens its corresponding file, streams in
 * a student id number and grade for that student. The 
 * student id and grade along with the class name is used
 * to create a Student object which is stored in a vector.
 * The program concludes by prompting the user to enter an
 * id then locates that id in the vector then returns all
 * class names and grades matching that id number. 
 * ********************************************************/

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstring>

using namespace std;

#include "Student.h"

string to_lower(const string& in_str)
{
    string result;
    string s = in_str;
    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];
        if (c >= 'A' and c <= 'Z')
        {
            c = c - 'A' + 'a';
            result.push_back(c);
        }
        else
        {
            result.push_back(c);
        }
    }
    return result;
}

int main()
{
    Student* student_pointer;
    vector<Student*> students;
    string class_name;
    string filename;
    int id;
    int i;
    string grade;
    ifstream in, in_2;

    in.open("classes.txt");

    if (!in.is_open())
    {
        cout << "Couldn't open 'classes.txt'file\n";
        return 1;

    }

    in >> class_name;

    while (!in.eof())
    {
        filename = to_lower(class_name) + ".txt";
        in_2.open(filename.c_str());

        if (!in_2.is_open())
        {
            cout << "Couldn't open " << filename << " file.\n";
            return 1;            
        }

        in_2 >> id >> grade;
       
        while (!in_2.eof())
        {
            student_pointer = new Student(id, grade, class_name);
            students.push_back(student_pointer);
            in_2 >> id >> grade;
        }
        in >> class_name;
        in_2.close();
    }
    in.close();
    
    cout << "Enter id: ";
    cin >> id;
    for (i = 0; i < students.size(); i++)
    {
        if (students[i]->get_id() == id)
        {
            cout << students[i]->get_course() << " "  << students[i]->get_grade() << endl;
        }
    }
    for (i = 0; i < students.size(); i++)
    {
        delete students[i];
    }
}
