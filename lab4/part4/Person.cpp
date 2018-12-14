/*
Eugene Kim
2/12/18
Person.cpp
*/

#include "Person.h"

string Person::get_name()
{
    return name;
}

string Person::get_best_friend()
{
    if (best_friend != 0)
    {
        return best_friend->name;
    }
    else
    {
        return "";
    }
}

int Person::get_popularity()
{
    return popularity;
}

void Person::set_best_friend(Person* bf)
{
    best_friend = bf;
    (bf->popularity)++;
}
