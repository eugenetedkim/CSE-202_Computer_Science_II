/**************************************************************
 * name
 * file name
 * date
 * description
 **************************************************************/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Person
{
protected:
    string name;
    string dob;
    string gender;
public:
    Person(): name(""), dob(""), gender("") { }
    Person(string n, string d, string g): name(n), dob(d), gender(g) { }
    virtual void print() { cout << name << " " << dob << endl; }
};

class Student: public Person
{
protected:
    string major;
public:
    Student(): Person() { major = ""; }
    Student(string n, string d, string g, string m): Person(n, d, g) { major = m; }
    virtual void print() { Person::print(); cout << "    Student, Major: " << major << endl; }
};

class Instructor: public Person
{
protected:
    int salary;
public:
    Instructor(): Person(), salary(0) { }
    Instructor(string n, string d, string g, int s): Person(n, d, g), salary(s) { }
    virtual void print()
    {
        if (gender == "M")
            cout << "Mr. ";
        else // assuming gender == "F"
            cout << "Ms. ";
        Person::print();
        cout << "    Instructor, Salary: " << salary << endl;
    }
};

main()
{
    vector<Person *> dudes(4); // vector of pointers to Person (dudes or dudets)

    // normal assignment of the same types: pointer to Person
    dudes[0] = new Person("Jack", "3/11/70", "M");
    
    // pointer of a derived class assigned to a pointer of base class
    dudes[1] = new Student("Katie", "4/12/80", "F", "CS");

    // two more examples
    dudes[2] = new Instructor("Tom", "5/13/90", "M", 55000);
    dudes[3] = new Instructor("Pam", "6/14/80", "F", 60000);

    for (int i = 0; i < dudes.size(); i++)
        dudes[i]->print(); // dynamically (at run time) the correct print() is called

    Person p = *(dudes[2]); // sliced off Instructor
    p.print();

    // clean up
    for (int i = 0; i < dudes.size(); i++)
        delete dudes[i];
}
