/*
Eugene Kim
2/3/18
version2/strncpy.cpp
*/

#include <iostream>

using namespace std;

void strncpy(char *t, const char *s, const unsigned int n)
{
    unsigned int i;
    for (i = 0; i < n and *(s + n); i++)
        *(t + i) = *(s + i);
    t[i] = '\0';
}

int main()
{
    char greeting[10] = "hi jkl";
    char response[10] = "efg";

    strncpy(greeting, response, 2);

    cout << "greeting=";

    for (int i = 0; greeting[i] != '\0'; i++)
    {
        cout << greeting[i];
    }
    cout << "\n";
    return 0;
}
