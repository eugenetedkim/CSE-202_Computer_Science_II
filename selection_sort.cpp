#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void selection_sort(vector<int>& arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            { 
                swap(arr[i], arr[j]);
            }
        }
    }
}

int main()
{
    vector<int> list;
    int input;
    ifstream in;

    in.open("numbers");

    if (!in.is_open())
    {
        cout << "Unable to open file" << endl;
    }

    in >> input;
    while (!in.eof())
    {
        list.push_back(input);
        in >> input;
    }
    
    in.close();
    
    selection_sort(list, list.size());

    for (int i = 0; i < list.size(); i++)
    {
        cout << list[i] << endl;
    }
}
