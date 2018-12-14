CSE 202 Lab 4: Classes, Vectors, and Pointers
1. Perform the following exercises under lab4 sub directory.

2. Implement class Person with the following fields:

the name
a pointer to best friend (Person *)
a popularity counter that indicates how many other people have this person as their best friend
Write a program that reads in a list of names, allocates an object of type Person for each name, and stores them in a vector of pointers: vector<Person *>. The program then asks for name of the best friend for each Person, locates the object matching the friend's name, and calls set_best_friend() member function to update the pointer and counter. Finally, the program should print out all Person objects. This includes listing the name, best friend, and popularity count for each person.

The following three files implement most of the above functionality. Prior to running the program, make sure file names with a list of names already exists in your directory.

#ifndef PERSON_H
#define PERSON_H

// your name
// Person.h
// date
// description

#include <string>

using namespace std;

class Person
{
    string name;
    Person * best_friend;
    int popularity;
public:
    Person(): name(""), best_friend(0), popularity(0) { }
    Person(string n): name(n), best_friend(0), popularity(0) { }
    string get_name();
    string get_best_friend();
    int get_popularity();
    void set_best_friend(Person *);
};

#endif
// your name
// Person.cpp
// date
// description

#include "Person.h"

string Person::get_name()
{
    return name;
}

string Person::get_best_friend()
{
    if (best_friend != 0) // check for null pointer
        return best_friend->name;
    else return "";
}

int Person::get_popularity()
{
    return popularity;
}

void Person::set_best_friend(Person * bf)
{
    best_friend = bf;
    (bf->popularity)++;
}
/**************************************************
 * your name
 * Perosn_main.cpp
 * date
 * description
 **************************************************/

#include <iostream>
#include <iomanip>	// for setw
#include <fstream>	// for ifstream
#include <string>
#include <vector>

#include "Person.h"

using namespace std;

main()
{
    string name;
    vector<Person *> people; // vector of pointers to objects of type Person
    Person * person_pointer;

    ifstream in;

    in.open("names");
    if (!in.is_open()) {
        cout << "Couldn't open 'names' file.\n";
        return 1;
    }

    in >> name;
    while (!in.eof()) {
        person_pointer = new Person(name);
        people.push_back(person_pointer); // no check for duplicate names

        in >> name;
    }

    in.close();

    int i, j;

    // for each person prompt for a best friend name
    for (i = 0; i < people.size(); i++) {
        cout << "Who is " << people[i]->get_name() << "'s best friend? ";
        cin >> name;

        // search for best friend
        for (j = 0; j < people.size(); j++)
            if (people[j]->get_name() == name)
                break;
        if (j < people.size()) // found a best friend
            people[i]->set_best_friend(people[j]);
        else
            cout << "Couldn't find best friend " << name << endl;
    }

    // list of name, best friend, and popularity count
    for (i = 0; i < people.size(); i++) {
        person_pointer = people[i];
        cout << left << setw(10) << person_pointer->get_name();
        cout << left << setw(10) << person_pointer->get_best_friend();
        cout << right << setw(2) << person_pointer->get_popularity() << endl;
    }

    // clean up
    for (i = 0; i < people.size(); i++)
        delete people[i];
}
As in Lab 1, develop your own makefile for this program.

3. Draw the vector, objects, and pointers for file names

Jackie
Jack
Amanda
Rod
Connie
and input (from keyboard)

Jack
Sam
Jack
Connie
Rod
4. Modify the program to prevent duplicate names being inserted in the vector.

5. In what scenario does the check for null pointer in get_best_friend() become necessary? What would happen if the check was not there?

6. Modify the program to prompt the user for another name if best friend is not found.

7. Hand in

drawing from 3.
answer to questions in 5.
printout of your complete program, cumulative 4. and 6.
printout of make file
percent completed
printout of typescript of a sample run
