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
        cout << a[i] << endl;
    }
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

    appendVector(a, b);
}
