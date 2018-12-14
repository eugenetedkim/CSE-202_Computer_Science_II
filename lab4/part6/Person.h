#ifndef PERSON_H
#define PERSON_H

/***************************************************************** 
Eugene Kim
Person.h
2/12/18
Defining Person class interface which will define objects
with a name, a pointer to a best friend, and a popularity number.
*****************************************************************/

#include <string>

using namespace std;

class Person
{
private:
    string name;
    Person* best_friend;
    int popularity;
public:
    Person(): name(""), best_friend(0), popularity(0) { }
    Person(string n): name(n), best_friend(0), popularity(0) { }
    string get_name();
    string get_best_friend();
    int get_popularity();
    void set_best_friend(Person*);
};

#endif
