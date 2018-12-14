/***********************************************************************

                            Eugene Kim
                            Computer Science II
                            CSE 202
                            Winter 2018
                            2/12/18
                            Lab 4: Classes, Vectors, and Pointers
                            Status: 100%

************************************************************************
Person_main.cpp
This program checks if "names" file is associated and opens it. It then
creates an object using the new operator once input has been streamed in
and stores the pointer to a vector. It further checks if a name already
exists and prevents duplication of an object. The program asks the user
to input the name of the best friend for each object and stores the
pointer to that object as a private data field. It keeps count the number
of people who considered an object to be their best friend and then prints
out the results.
************************************************************************/


#include <iostream>
#include <iomanip>	// for setw
#include <fstream>	// for ifstream
#include <string>
#include <vector>

#include "Person.h"

using namespace std;

int main()
{
    string name;
    vector<Person *> people; // vector of pointers to objects of type Person
    Person * person_pointer;
    bool valid = true;

    ifstream in;

    in.open("names");
    if (!in.is_open()) 
    {
        cout << "Couldn't open 'names' file.\n";
        return 1;
    }

    in >> name;
    while (!in.eof() && valid) 
    {
        person_pointer = new Person(name);
        people.push_back(person_pointer); // no check for duplicate names

        in >> name;
        for (int i = 0; i < people.size(); i++)
        {
            if (people[i]->get_name() == name)
            {
                cout << "\nWarning: " << name << " already exists in file!" << endl
                    << "Duplicate name, " << name << ", not added.\n" << endl;
                valid = false;
            }
        }
    }

    in.close();

    int i, j;

    // for each person prompt for a best friend name
    for (i = 0; i < people.size(); i++)
    {
        cout << "Who is " << people[i]->get_name() << "'s best friend? ";
        cin >> name;

        // search for best friend
        for (j = 0; j < people.size(); j++)
        {
            if (people[j]->get_name() == name)
            {
                break;
            }
        }

        if (j < people.size()) // found a best friend
        {
            people[i]->set_best_friend(people[j]);
        }
        else
        {
            cout << "Couldn't find best friend " << name << ". Please enter another name." << endl;
            --i;
        }
    }

    // list of name, best friend, and popularity count
    for (i = 0; i < people.size(); i++)
    {
        person_pointer = people[i];
        cout << left << setw(10) << person_pointer->get_name();
        cout << left << setw(10) << person_pointer->get_best_friend();
        cout << right << setw(2) << person_pointer->get_popularity() << endl;
    }

    // clean up
    for (i = 0; i < people.size(); i++)
    {
        delete people[i];
    }
}
