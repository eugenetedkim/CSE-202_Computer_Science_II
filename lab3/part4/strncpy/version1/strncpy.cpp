/*
Eugene Kim
2/3/18
version1/strncpy.cpp
*/

#include <iostream>

using namespace std;

void strncpy(char t[], const char s[], const unsigned int n)
{
    unsigned int i;
    for (i = 0; i < n and s[i]; i++)
        t[i] =  s[i];
    t[i] = '\0';
}

int main()
{
    char greeting[10] = "Hello";
    char response[10] = "Hi"; 

    strncpy(greeting, response, 2);

    cout << "greeting=";

    for (int i = 0; greeting[i] != '\0'; i++)
    {
        cout << greeting[i];
    }
    cout << "\n";
    return 0;
}


