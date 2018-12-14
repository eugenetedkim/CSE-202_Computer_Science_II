#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

using namespace std;

class Employee
{
private:
    string name;
    double salary;
public:
    Employee(string n = "", double s = 0);
    string get_name();
    double get_salary();
    void set_salary(double s);
};

#endif  
