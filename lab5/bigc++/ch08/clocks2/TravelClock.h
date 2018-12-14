#ifndef TRAVEL_CLOCK
#define TRAVEL_CLOCK

#include <string>

using namespace std;

#include "Clock.h"

class TravelClock: public Clock
{
public:
    TravelClock(bool mil, string loc, int diff);
    virtual string get_location() const;
    virtual int get_hours() const;
private:
    string location;
    int time_difference;
};

#endif
