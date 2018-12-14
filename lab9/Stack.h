/*****************************************************************
                
                Eugene Kim
        Computer Science II (CSE 202)
                Winter 2018
                  3/12/18
        Lab 9: Stacks, Templates, and Adapters
           Status: 100% Complete

******************************************************************
 * File Name: Stack.h
 * Date: 3/12/18
 * Description: class Stack definition that defines its private
 *              data field as a vector of type T and defines
 *              member functions push(), pop(), top() and empty().
 *              
 *              4. What would happen if we add s2.pop(); or
 *              cout << s2.top(); to the end of the program (when
 *              s2 is empty?)
 *
 *              A segmentation fault would occur in both cases,
 *              as top() and pop() attempts to access/modify an
 *              empty vector.
 ****************************************************************/

#ifndef STACK_H
#define STACK_H

#include <vector>

using namespace std;

template <typename T>
class Stack
{
private:
    vector<T> container;
public:
    Stack(): container() {}
    void push(T x)
    {
        container.push_back(x);
    }
    void pop()
    {
        if(!container.empty())
        {
            return container.pop_back();
        }
        else
        {
            cout << "Error: Cannot use pop() on empty vector." << endl;
        }
    }
    T top()
    {
        if(!container.empty())
        {
            return container.back();
        }
        else
        {
            return T();
        } 
    }
    bool empty()
    {
        return container.empty();
    }
};

#endif
