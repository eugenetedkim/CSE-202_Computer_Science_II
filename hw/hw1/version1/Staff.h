/****************************************************************
Eugene Kim
Staff.h
1/29/18
Defining class interface
****************************************************************/

#ifndef STAFF_H
#define STAFF_H 

#include <iostream>
#include <string>
#include <vector>

#include "Employee.h"

using namespace std;

class Staff
{
private:
    vector<Employee> members;
    int find(string n); // returns position of n in members of -1 if not found
public:
    Staff() { }
    void add_employee(Employee e);  // better: const Employee &
    void raise_salary(string n, int percent);
    void print();
};

#endif
