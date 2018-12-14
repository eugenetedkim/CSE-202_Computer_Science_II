/*
Eugene Kim
2/3/18
version1/strcpy.cpp
*/

#include <iostream>

using namespace std;

void strcpy(char t[], const char s[])
{
    for (int i = 0; t[i] = s[i]; i++);
}

int main()
{
    char greeting[10] = "Hello";
    char response[10] = "Hi";

    strcpy(greeting, response);

    cout << "greeting=";

    for (int i = 0; greeting[i] != '\0'; i++)
    {
        cout << greeting[i];
    }
    cout << "\n";
    return 0;

}
