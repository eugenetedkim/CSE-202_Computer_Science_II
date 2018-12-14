/*****************************************************************
                
                Eugene Kim
        Computer Science II (CSE 202)
                Winter 2018
                  3/12/18
        Lab 9: Stacks, Templates, and Adapters
           Status: 100% Complete

******************************************************************
 * File Name: Stack_test.cpp
 * Date: 3/12/18
 * Description: This program has instantiated a stack of integers
		called s1 and a stack of strings called s2. The
		template parameter T in s1 is int and in s2 is
		string. Again this is very similar to STL vector
		where template parameter T could be any type.

		4. What would happen if we add s2.pop(); or
		cout << s2.top(); to the end of the program
		(when s2 is empty?)
		
		A segmentation fault would occur in both cases,
		as top() and pop() attempts to access/modify an
		empty vector.

		Fix Stack.h so that these problems
		would not occur.
 ****************************************************************/

#include <iostream>
#include <string>

#include "Stack.h"

int main()
{
    Stack<int> s1;

    s1.push(4);
    s1.push(3);
    s1.push(2);
    s1.push(1);
    while (!s1.empty())
    {
        cout << s1.top() << endl;
        s1.pop();
    }

    Stack<string> s2;
    s2.push("Yoda said ");
    s2.push("something ");
    s2.push("to write ");
    while (!s2.empty())
    {
        cout << s2.top();
        s2.pop();
    }
    cout << endl;
    
    s2.pop();

    cout << s2.top();
}
