/*
Eugene Kim
2/2/18
strcmp.cpp
*/

#include <iostream>

using namespace std;

unsigned int strlen(const char* s)
{
    unsigned int n;
    for (n = 0; *(s+n); n++); // same as s[n] != '\0'
    return n;
}

int strcmp(char* t, const char* s)
{
    bool equal = true;
    for (int i = 0; i < strlen(s) + 1; i++)
    {
        if (t[i] != s[i])
        {
            equal = false;
        }
    }
    
    if (equal)
    {
        return 0;
    }
    else
    {
        if (strlen(t) < strlen(s))
        {
            int count = 0;
            for (int i = 0; t[i] == s[i]; i++)
            {
                ++count;
            }
            if ((t[count] - s[count]) > 0)
            {
                return (t[count] - s[count])*-1;
            }
        }
        else if (strlen(t) > strlen(s))
        {
            int count = 0;
            for (int i = 0; t[i] == s[i]; i++)
            {
                ++count;
            }

            if ((t[count] - s[count]) < 0)
            {
                return (t[count] - s[count])*-1;
            }
        }
        else
        {
            int count = 0;
            for (int i = 0; t[i] == s[i]; i++)
            {
                ++count;
            }
            return t[count] - s[count];
        }
    }
}

int main()
{
    char greeting[10] = "efg";
    char response[10] = "efh";

    cout << strcmp(greeting, response) << endl;
}
