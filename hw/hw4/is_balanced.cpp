/******************************************************************
 * Name: Eugene Kim
 * File Name: is_balanced.cpp
 * Date: 3/14/18
 * Description: 		Homework 4
 *
 *	        This program prompts the user for a filename
 *              and opens the file upon input. The program
 *              then traverses through the file, creates a
 *              vector of characters including only brackets, 
 *              both open and closed from the file, ignoring
 *              all other character elements in the file. It
 *              then traverses this vector until the end pushing 
 *              open brackets onto a stack of characters until
 *              a closed bracket which at that point it checks
 *              whether the stack is empty. If the stack is empty,
 *              the program stops traversing the vector and lets
 *              the user know that the file is unbalanced. If
 *              the stack is not empty, then it checks whether
 *              the top of the stack is a matching open bracket
 *              to the closed bracket in the vector and pops it
 *              off the stack. If top of the stack doesn't match
 *              the corresponding closed bracket, it repeats the
 *              process over until the end of the vector.
 *              Lastly, it outputs 'balanced' if the stack is empty
 *              and 'unbalanced' if it is not.
 * ****************************************************************/

#include <stack>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    cout << "Input file name: "; // This program prompts the user for a filename
    string filename;
    cin >> filename;
    
    ifstream in;
    in.open(filename.c_str()); // and opens the file upon input.
    
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
