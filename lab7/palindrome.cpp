/********************************************************************
                
                Eugene Kim
        Computer Science II (CSE 202)
                Winter 2018
                  3/5/18
                Lab 7: Recursion
           Status: 100% Complete

*********************************************************************
 * Name: Eugene Kim
 * File Name: palindrome.cpp
 * Date: 3/5/18
 * Description: A user inputs a string and the program builds and
 *              returns a new string with letters only. The program
 *              checks if the first and last characters in the string
 *              are equal and if not, due to case sensitivity, the
 *              program converts all characters in the string to
 *              lower-case, then checks again. If indeed the string
 *              is a palindrome, the program prints that it is.
 * ******************************************************************/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool is_letter(char c)
{
    if ((c >= 'A' and c <= 'Z') or (c >= 'a' and c <= 'z'))
    {
        return true;
    }
    return false;
}

string generate_palindrome(string s)
{
    string r;
    for (int i = 0; i < s.length(); i++)
    {
        if (is_letter(s[i]))
        {
            r += s[i];
        }
    }
    return r;
}

char to_lower(char c)
{ 
    if (c >= 'A' and c <= 'Z')
    {
        return c - 'A' + 'a';
    }
    return c;
}

bool is_palindrome(string s)
{
    if (s.length() <= 1)
    {
        return true;
    }

    char first = s[0];
    char last = s[s.length() - 1];
    
    if (first != last)
    {
        first = to_lower(first);
        last = to_lower(last);
    }
    if (first == last )
    {
        string shorter = s.substr(1, s.length() - 2);
        return is_palindrome(shorter);
    }
    return false;
}

main()
{
    cout << "Enter a string: ";
    string input;
    getline(cin, input);
    cout << "\'" << input << "\' is ";

    input = generate_palindrome(input);

    if (!is_palindrome(input))
    {
        cout << "not ";
    }
    cout << "a palindrome.\n";
}
