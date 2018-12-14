#include <iostream>
#include <string>

using namespace std;

#include "Employee.h"

class Department
{
private:
    string name;
    Employee* receptionist;
    Employee* secretary;
public:
    Department(string n);
    void set_receptionist(Employee* e);
    void set_secretary(Employee* e);
    void print() const;
};

Department::Department(string n)
{
    name = n;
    receptionist = NULL;
    secretary = NULL;
}

void Department::set_receptionist(Employee* e)
{
    receptionist = e;
}

void Department::set_secretary(Employee* e)
{
    secretary = e;
}

void Department::print() const
{
    cout << "Name: " << name << "\n"
        << "Receptionist: ";
    if (receptionist == NULL)
    {
        cout << "None";
    }
    else
    {
        cout << receptionist->get_name() << " "
            << receptionist->get_salary();
    }
    cout << "\nSecretary: ";
    if (secretary == NULL)
    {
        cout << "None";
    }
    else if (secretary == receptionist)
    {
        cout << "Same";
    }
    else
    {
        cout << secretary->get_name() << " "
            << secretary->get_salary();
    }
    cout << "\n";
}

int main()
{
    Department shipping("Shipping");
    Department qc("Quality Control");
    Employee* harry = new Employee("Hacker, Harry", 45000);
    shipping.set_secretary(harry);
    Employee* tina = new Employee("Tester, Tina", 50000);
    qc.set_receptionist(tina);
    qc.set_secretary(tina);
    tina->set_salary(55000);
    shipping.print();
    qc.print();
    delete tina;
    delete harry;
    return 0;
}
