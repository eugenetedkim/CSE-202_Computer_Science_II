/*************************************************************************
Eugene Kim
merge.cpp
1/29/18
Merge two vectors a and b, alternating their elements into a third vector.
If one vector is shorter than the other, alternate as long as the shorter
vector, then append the remaining elements from the longer vector.

merge() checks vector size for vectors 'a' and 'b', then merges the vectors
starting with 'a' until the smaller vector has reached its last element.
The program that proceeds to append the elements of the bigger vector
where it last left off during merge through the use of a counter.
**************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

vector<int> merge(vector<int> a, vector<int> b)
{
    int n = a.size();
    int m = b.size();
    vector<int> c;
    int i;

    if (m < n) 
    {
        int count = 0;
        for (i = 0; i < m; i++)
        {
            c.push_back(a[i]);
            c.push_back(b[i]);
            count++;
        }

        for (i = 0; i < n; i++)
        {
            c.push_back(a[count]);
            count++;
        }
    }

    if (m > n)
    {
        int count = 0;
        for (i = 0; i < n; i++)
        {
            c.push_back(a[i]);
            c.push_back(b[i]);
            count++;
        }

        for (i = 0; i < m; i++)
        {
            c.push_back(b[count]);
            count++;
        }
    }

    if (n == m)
    {
        for (i = 0; i < n; i++)
        {
            c.push_back(a[i]);
            c.push_back(b[i]);
        }
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
    
    vector<int> c = merge(a, b);
    
    int n = a.size();
    int m = b.size();
    
    for (int i = 0; i < m + n; i++)
    {
        cout << c[i] << endl;
    } 
}
