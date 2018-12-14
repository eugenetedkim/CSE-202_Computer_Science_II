#ifndef CLOCK_H
#define CLOCK_H

//ch08/clocks1/Clock.h

#include <string>

using namespace std;

class Clock
{
public:
    Clock(bool use_military);
    virtual string get_location() const;
    virtual int get_hours() const;
    int get_minutes() const;
    bool is_military() const;
private:
    bool military;
};

#endif
