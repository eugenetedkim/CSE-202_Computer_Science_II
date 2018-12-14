/***********************************************************************

                            Eugene Kim
                            Computer Science II
                            CSE 202
                            Winter 2018
                            2/5/18
                            Lab 3: Arrays and Pointers
                            Status: 100%

************************************************************************
main.cpp
This program copies, concatenates, compares and returns lengths of 
char-arrays through the use of pointers.
************************************************************************/

#include <iostream>

using namespace std;

void strcpy(char *t, const char *s)
{
    for ( ; *t++ = *s++; );
}

void strncpy(char *t, const char *s, const unsigned int n)
{
    unsigned int i;
    for (i = 0; i < n and *(s + i); i++)
        *(t + i) = *(s + i);
    t[i] = '\0';
}

void strcat(char* t, const char* s)
{
    unsigned int i;

    for (i = 0; t[i]; i++); // or i = strlen(t);
    strcpy(t + i, s);
}

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
        int count = 0;
        for (int i = 0; *(t + i) == *(s + i); i++)
        {
            ++count;
        }

        if (strlen(t) < strlen(s))
        {
            if ((*(t + count) - *(s + count)) > 0)
            {
                return (*(t + count) - *(s + count))*-1;
            }
        }
        else if (strlen(t) > strlen(s))
        {

            if ((*(t + count) - *(s + count)) < 0)
            {
                return *(t + count) - *(s + count)*-1;
            }
        }
        else
        {
            return *(t + count) - *(s + count);
        }
    }
}


main()
{
    char str1[20] = "abcd", str2[20] = "efg";

    cout << "str1=" << str1<< " str2=" << str2 << endl;
    cout << "strlen(str1)=" << strlen(str1)<< " strlen(str2)=" << strlen(str2) << endl;

    strcpy(str1, str2);
    cout << "str1=" << str1 << endl;

    strcat(str1, str2);
    cout << "str1=" << str1 << endl;

    cout << "strcmp(str1, str2)=" << strcmp(str1, str2) << endl;
    cout << "strcmp(str2, \"efh\")=" << strcmp(str2, "efh") << endl;

    strncpy(str2, "hi jkl", 2);
    cout << "str2=" << str2 << endl;

    strncpy(str2, "hi jkl", 12);
    cout << "str2=" << str2 << endl;
}

