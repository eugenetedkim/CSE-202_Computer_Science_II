#ifndef STACK_H
#define STACK_H

// your name
// Stack.h
// date
// description

#include <vector>

using namespace std;

template <typename T>
class Stack
{
    vector<T> container;
public:
    Stack(): container() {}
    void push(T x) { container.push_back(x); }
    void pop() { container.pop_back(); }
    T top() { return container.back(); }
    bool empty() { return container.empty(); }
};

#endif
