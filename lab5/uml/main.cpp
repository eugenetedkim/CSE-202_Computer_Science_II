/*
Name: Eugene Kim
File Name: main.cpp
Date: 2/19/18
Description:
Below is a program that contains a vector of pointers to objects
of class Person and its derived classes, Student and Instructor.
Each pointer is dereferenced and dynamically invoked according
to its corresponding print function.
*/

#include <iostream>
#include <vector>

using namespace std;

#include "Student.h"
#include "Instructor.h"

int main()
{
    vector<Person*> csusb(3);
    csusb[0] = new Person("Eugene", "5/23/97", "M");
    csusb[1] = new Student("Eugene", "5/23/97", "M", "Computer Science");
    csusb[2] = new Instructor("Tiffany", "1/1/77", "F", 70000);
    
    for (int i = 0; i < csusb.size(); i++)
    {
        cout << "\n";
        csusb[i]->print();
        cout << "\n";
    }

    for (int i = 0; i < csusb.size(); i++)
    {
        delete csusb[i];
    }
    return 0;
}
