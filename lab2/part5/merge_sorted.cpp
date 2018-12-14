/**********************************************************************
Eugene Kim
merge_sorted.cpp
1/29/18
Merge two vectors, while simultaneously checking whether the elements
of one vector is smaller than the other to produce a third vector
containing the merged vectors in ascending order.
**********************************************************************/

#include <iostream>
#include <vector>

using namespace std;

vector<int> merge_sorted(vector<int> a, vector<int> b)
{
    vector<int> r;
    int i = 0, j = 0;
    while (i < a.size() || j < b.size())
    {
        if (i == a.size())
        {
            r.push_back(b[j]);
            ++j;
        }
        else if (j == b.size())
        {
            r.push_back(a[i]);
            ++i;
        }
        else if (a[i] < b[j])
        {
            r.push_back(a[i]);
            ++i;
        }
        else
        {
            r.push_back(b[j]);
            j++;
        }
    }
    return r;
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

    for (int not_sorted = 0; not_sorted  < a.size() - 1; not_sorted++)
    {
        int smallest_pos = not_sorted;
        for (int i = not_sorted + 1; i < a.size(); i++)
        {
            if (a[i] < a[smallest_pos])
            {
                smallest_pos = i;
            }
        }
        if (smallest_pos != not_sorted)
        {
            int temp = a[smallest_pos];
            a[smallest_pos] = a[not_sorted];
            a[not_sorted] = temp;
        }
    }

    for (int not_sorted = 0; not_sorted < b.size() - 1; not_sorted++)
    {
        int smallest_pos = not_sorted;
        for (int i = not_sorted + 1; i < b.size(); i++)
        {
            if (b[i] < b[smallest_pos])
            {
                smallest_pos = i;
            }
        }
        if (smallest_pos != not_sorted)
        {
            int temp = b[smallest_pos];
            b[smallest_pos] = b[not_sorted];
            b[not_sorted] = temp;
        }
    }

    vector<int> r = merge_sorted(a, b);

    int n = r.size();

    for (int i = 0; i < n; i++)
    {
        cout << r[i] << endl;
    }
    return 0;
}

