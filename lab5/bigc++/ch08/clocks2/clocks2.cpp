#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

#include "TravelClock.h"

int main()
{

    vector<Clock*> clocks(3);
    clocks[0] = new Clock(true);
    clocks[1] = new TravelClock(true, "Rome", 9);
    clocks[2] = new TravelClock(false, "Tokyo", -7);

    for (int i = 0; i < clocks.size(); i++)
    {
        cout << clocks[i]->get_location() << " time is "
            << clocks[i]->get_hours() << ":"
            << setw(2) << setfill('0')
            << clocks[i]->get_minutes()
            << setfill(' ') << "\n"; 
    }


   /*

    Clock clock1(true);
    TravelClock clock2(true, "Rome", 9);
    TravelClock clock3(false, "Tokyo", -7);

    cout << clock1.get_location() << " time is "
        << clock1.get_hours() << ":"
        << setw(2) << setfill('0')
        << clock1.get_minutes()
        << setfill(' ') << "\n";
    cout << clock2.get_location() << " time is "
        << clock2.get_hours() << ":"
        << setw(2) << setfill('0')
        << clock2.get_minutes()
        << setfill(' ') << "\n";
    cout << clock3.get_location() << " time is "
        << clock3.get_hours() << ":"
        << setw(2) << setfill('0')
        << clock3.get_minutes()
        << setfill(' ') << "\n";*/
    return 0;
}
