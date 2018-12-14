/*****************************************************************
                
                Eugene Kim
        Computer Science II (CSE 202)
                Winter 2018
                  3/12/18
        Lab 8: Sorting and Searching
           Status: 100% Complete

******************************************************************
 * File Name: binary_search.cpp
 * Date: 3/12/18
 * Description: This program streams in a set of numbers into a
 *              a vector from an input file named 'numbers' then
 *              sorts it in ascending order using the selection
 *              sort function. The program then prompts the user
 *              to input numbers to find in the vector and upon
 *              pressing CTRL-D (end-of-file), the program uses
 *              the binary search function to locate each number
 *              then prints out each position.
 ****************************************************************/

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

int binary_search(vector<int> v, int from, int to, int value)
{
    if (from > to)
    {
        return -1;
    }

    int mid = (from + to) / 2;

    if (v[mid] == value)
    {
        return mid;
    }
    else if (v[mid] < value)
    {
        return binary_search(v, mid + 1, to, value);
    }
    else
    {
        return binary_search(v, from, mid - 1, value);
    }
}

int main()
{
    vector<int> list;
    vector<int> list_2;
    int input, value;
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

    cout << "Input a number" << endl;
    while (cin >> value)
    {
        list_2.push_back(value);
        cout << "Input a number" << endl;
    }

    for (int i = 0; i < list_2.size(); i++)
    {
        value = list_2[i];
        cout << binary_search(list, 0, list.size(), value) << endl;
    }
}


