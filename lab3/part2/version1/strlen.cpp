/*
Eugene Kim
2/2/18
version1/strlen.cpp
Write your own main() to test the correctness of this function.
*/

#include <iostream>

using namespace std;

int strlen(const char s[])
{
    unsigned int n;
    for (n = 0; s[n]; n++); // same as s[n] != '\0'
    return n;
}

int main()
{
    char greeting[10] = "Hello";
    char response[10] = "Hi";

    int length = strlen(greeting);

    cout << "The char-array, greeting, has " 
        << length + 1 << " characters." << endl
        << "The characters are: ";

    for (int i = 0; greeting[i] != '\0'; i++)
    {
        cout << greeting[i];
    }

    cout << "\n";

    length = strlen(response);

    cout << "The char-array, reponse, has "
        << length + 1 << " characters." << endl
        << "The characters are: ";

    for (int i = 0; greeting[i] != '\0'; i++)
    {
        cout << response[i];
    }

    cout << "\n";
    return 0;
}
