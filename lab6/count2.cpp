/*****************************************************************
                
                Eugene Kim
        Computer Science II (CSE 202)
                Winter 2018
                  2/26/18
                Lab 6: Streams
           Status: 100% Complete

******************************************************************
 * File Name: count2.cpp
 * Date: 2/26/18
 * Description: This program continuously asks the user for a file
 *              name, and returns the count of lines, words, and
 *              characters of that file until ^D (end-of-file).          
 ****************************************************************/

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

int main()
{
    while (!cin.eof())
    {
        cout << "Enter a file name: ";
        string filename;
        cin >> filename;

        ifstream in;
        in.open(filename.c_str());

        if (in.fail())
        {
            cout << "Couldn't open " << filename << " file.\n";
            return 1;
        }

        string line;
        string word;
        int chars = 0;
        int words = 0;
        int lines = 0;

        getline(in, line);
        while (!in.eof())
        {
            lines++;
            chars += line.length() + 1; // + 1 for new-line
    
            istringstream line_string(line);
            while (line_string >> word)
            {
                words++;
            }
            getline(in, line);
        }
        cout << lines << ' ' << words << ' ' << chars << endl;
        in.close();
    }
}
