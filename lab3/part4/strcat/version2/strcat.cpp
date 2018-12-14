/*
Eugene Kim
2/2/18
version2/strcat.cpp
*/

#include <iostream>

using namespace std;

void strcpy(char* t, const char* s)
{
    for ( ; *t++ = *s++; );
}


void strcat(char* t, const char* s)
{
    unsigned int i;

    for (i = 0; t[i]; i++); // or i = strlen(t);
    strcpy(t + i, s);
}

int main()
{
    char greeting[10] = "Hello";
    char response[10] = "Hi";

    strcat(greeting, response);

    cout << "greeting=";

    for (int i = 0; greeting[i] != '\0'; i++)
    {
        cout << greeting[i];
    }
    cout << "\n";
    return 0;
}
