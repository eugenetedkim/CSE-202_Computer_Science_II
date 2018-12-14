// name
// file name
// date
// description

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

#include "Student.h"
#include "Instructor.h"
/*
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
*/

int main()
{
    string n, d, g, m;
    int s,
    vector<Person*> p(5);
    Person* person_pointer;

    vector<Student*> students(2);
    Student* student_pointer;

    vector<Instructor*> faculty(2);
    Instructor* instructor_pointer;

    ifstream in;
    in.open("persons");
    if (!in.is_open())
    {
        cout << "Couldn't open 'persons' file.\n";
        return 1;
    }
    in >> n >> d >> g;
    for (int i = 0; !in.eof(); i++)
    {
        person_pointer = new Person(n, d, g);
        people[i]->push_back(person_pointer);
        in >> n >> d >> g;
    }
    in.close();

    in.open("students");
    if (!in.is_open())
    {
        cout << "Couldn't open 'students' file.\n";
        return 1;
    }
    in >> n >> d >> g >> m;
    for (int i = 0; !in.eof(); i++)
    {
        student_pointer = new Student(n , d, g, m);
        students[i]->push_back(student_pointer);
        in >> n >> d >> g >> m;
    }
    in.close();

    in.open("instructors");
    if (!in.is_open())
    {
        cout << "Couldn't open 'instructors' file.\n";
        return 1;
    }

    in >> n >> d >> g >> s;
    for (int i = 0; !in.eof(); i++)
    {
        instructor_pointer = new Instructor(n, d, g, s);
        instructors[i]->push_back(instructor_pointer);
        in  >> n >> d >> g >> s;
    }
    in.close();

    for (int i = 0; i < people.size(); i++)
    {
        cout << "\n";
        people[i]->print();
        cout << "\n";
    }

    for (int i = 0; i < people.size(); i++)
    {
        delete people[i];
    }
    return 0;

    for (int i = 0; i < students.size(); i++)
    {
        cout << "\n";
        students[i]->print();
        cout << "\n";
    }

    for (int i = 0; i < students.size(); i++)
    {
        delete students[i];
    }
    return 0;

    for (int i = 0; i < instructors.size(); i++)
    {
        cout << "\n";
        instructors[i]->print();
        cout << "\n";
    }

    for (int i = 0; i < instructors.size(); i++)
    {
        delete instructors[i];
    }
    return 0;
}
