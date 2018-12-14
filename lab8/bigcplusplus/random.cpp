#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

#include "ccc_time.h"

int main()
{
    srand(time(0));
    int random_number = 10 + 233 % 16;
    cout << random_number << endl;
}
