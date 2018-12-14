/***********************************************************************

                            Eugene Kim
                            Computer Science II
                            CSE 202
                            Winter 2018
                            1/29/18
                            Lab 2: Vectors
                            Status: 100%

************************************************************************
File Name: main.cpp

Problem Description: Function appendVector() declares a new vector
named 'c', then appends vectors 'a' and 'b' to vector 'c'. The program 
concludes with the output of elements contained in vector 'c'.

This problem was resolved by implementing the size() and declaring a new
vector 'c'.
***********************************************************************/

#include <iostream>
#include <vector>

using namespace std;

vector <int> appendVector(vector<int> & a, const vector<int> & b)
{

    int n = a.size();
    int m = b.size();
    vector<int> c(n+m);
    int i;    

    for (i = 0; i < n; i++)
    {
        c[i] = a[i];
    }

    for (i = 0; i < m; i++)
    {
        c[n + i] = b[i];
    }
    return c;
}

int main()
{
    vector<int> a, b;

    cout << "Please enter number to add to vector a: ";
    int temp;
    cin >> temp;
    while(temp != -1)
    {
        a.push_back(temp);
        cout << "Please enter number to add to vector a or -1 to stop: ";
        cin >> temp;
    }

    cout << "Please enter number to add to vector b: ";
    cin >> temp;
    while (temp != -1)
    {
        b.push_back(temp);
        cout << "Please enter number to add to vector b or -1 to stop: ";
        cin >> temp;
    }

    vector<int> c = appendVector(a, b);

    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i] << " ";
    }
    
    cout << "\n";
}

