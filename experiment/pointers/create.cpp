#include <iostream>
#include <string>

#include "Employee.h"

using namespace std;

int main()
{
    Employee boss("Eugene", 80000);
    Employee* p = new Employee("Lin, Lisa", 68000);
    cout << boss.get_name() << endl;
    cout << boss.get_salary() << endl;
    cout << p << endl;
    cout << p->get_name() << endl;
    cout << p->get_salary() << endl;
    int salary;
    if (p != NULL)
    {
        salary = p->get_salary();
    }
    cout << "Lisa's salary is "<< salary << "." << endl;
    Employee* secretary = new Employee("Tiffany", 100000);
    cout << secretary << endl;
    cout << secretary->get_name() << endl;
    cout << secretary->get_salary() << endl;
    Employee* warehouse;
    cout << warehouse << endl;
    cout << (*warehouse).get_name() << endl; // segmentation fault
    delete warehouse;
    cout << warehouse << endl;
}
