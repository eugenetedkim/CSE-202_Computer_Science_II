#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

main()
{
    string word;
    string line;
    int chars = 0;
    int words = 0;
    int lines = 0;

    ifstream in;
    in.open("test");
       
    getline(cin, line);
    while(!cin.eof())
    {
        lines++;

        chars += line.length() + 1;

        istringstream line_string(line);
        while (line_string >> word)
        {
            words++;
        }
        getline(cin, line);
    }
    
    cout << lines << ' ' << words << ' ' << chars << endl;
}
