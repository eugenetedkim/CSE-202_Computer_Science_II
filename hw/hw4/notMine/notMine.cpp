#include <iostream>
#include <stack>
#include <fstream>

using namespace std;

#include "Stack.h"

int main()
{
    stack<char> can;

    string filename;
    cout <<"Enter filename: ";
    cin >> filename;

    ifstream in;
    in.open(filename.c_str());

    if (!in.is_open())
    {
        cout << "Warning: Unable to open " << filename << "\n";
        return 1;
    }

    bool balanced;

    char e;
    in >> e;
    while (!in.eof())
    {
        if (e == '{' || e == '(' || e == '[' || e == '<')
        {
            can.push(e);
        }

        else if (e  == '}')
        {
            if (!can.empty())
            {
                if (can.top() == '{')
                {
                    can.pop();
                }
            }
            else
            {
                balanced = false;
                break;
            }
        }

        else if (e  == ')')
        {   
            if (!can.empty())
            {   
                if (can.top() == '(')
                {   
                    can.pop();
                }
            }
            else
            {   
                balanced = false;
                break;
            }
        }

        else if (e  == ']')
        {
            if (!can.empty())
            {
                if (can.top() == '[')
                {
                    can.pop();
                }
            }
            else
            {
                balanced = false;
                break;
            }
        }
        else if (e  == '>')
        {   
            if (!can.empty())
            {   
                if (can.top() == '<')
                {   
                    can.pop();
                }
            }
            else
            {   
                balanced = false;
                break;
            }
        }
        in >> e;
    }

    in.close();

    if (!balanced)
    {
        cout << "not balanced" << endl;
    }
    else
    {
        cout << "balanced" << endl;
    }
}



















