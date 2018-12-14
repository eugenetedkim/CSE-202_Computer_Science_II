#include <stack>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

#include "Stack.h"

int main()
{
    cout << "Input file name: ";
    string filename;
    cin >> filename;
    
    ifstream in;
    in.open(filename.c_str());
    
    if (!in.is_open())
    {
        cout << "Unable to open file" << endl;
        return -1;
    }

    vector<char> brackets(20);

    string input;
    
    in >> input;
    while (!in.eof())
    {
        for (int i = 0; i < input.size(); i++)
        {
            if (input[i] == '(' || input[i] == ')' || input[i] == '{' || input[i] == '}' || input[i] == '[' || input[i] == ']' || input[i] == '<' || input[i] == '>') 
            {
                brackets.push_back(input[i]);
            }
        }
        in >> input;
    }
    
    for (int i = 0; i < brackets.size(); i++)
    {
        cout << brackets[i];
    }
    cout << "\n";
    
    bool balanced = true;
    
    stack<char> open_brackets;
    
    for (int i = 0; i < brackets.size(); i++)
    {
        if (brackets[i] == '(' || brackets[i] == '{' || brackets[i] == '[' || brackets[i] == '<')
        {
            open_brackets.push(brackets[i]);
        }

        if (brackets[i] == ')')
        {
            if (open_brackets.empty())
            {
                balanced = false;
                break;
            }
            else
            {
                char top = open_brackets.top();
                if (top == '(')
                {   
                    open_brackets.pop();
                }
            }
        }
    
        if (brackets[i] == '}')
        {
            if (open_brackets.empty())
            {
                balanced = false;
                break;
            }
            else
            {   
                char top = open_brackets.top();
                if (top == '{')
                {   
                    open_brackets.pop();
                }
            }
        }    

        if (brackets[i] == ']')
        {
            if (open_brackets.empty())
            {
                balanced = false;
                break;
            }
            else
            {
                char top = open_brackets.top();
                if (top == '[')
                {
                    open_brackets.pop();
                }
            }
        }

        if (brackets[i] == '>')
        {
            if (open_brackets.empty())
            {
                balanced = false;
                break;
            }
            else
            {   
                char top = open_brackets.top();
                if (top == '<')
                {   
                    open_brackets.pop();
                }
            }            
        } 
    }

    if (!balanced)
    {
        cout << "not balanced" << endl;
    }    
    else if (open_brackets.size() == 0)
    {
        cout << "balanced" << endl;
    }
    else
    {
        cout << "not balanced" << endl;
    }
}
