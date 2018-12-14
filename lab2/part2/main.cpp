#include <iostream>
#include <vector>

using namespace std;

void appendVector(vector<int> & a, const vector<int> & b)
{
    for (int i = 0; i < b.size(); i++)
    {
        a.push_back(b[i]);
    }

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    
    cout << endl;
}

int main()
{
    vector<int> a;
    a.push_back(9);
    a.push_back(4);
    a.push_back(1);
    a.push_back(1);
    a.push_back(6);
    a.push_back(5);
    a.push_back(8);
    a.push_back(7);

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    
    cout << endl;

    vector<int> b;
    b.push_back(3);
    b.push_back(5);
    b.push_back(10);
    b.push_back(2);

    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << " ";
    }

    cout << endl;

    appendVector(a, b);
}
