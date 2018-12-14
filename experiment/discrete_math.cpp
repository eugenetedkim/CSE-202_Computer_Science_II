#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int b = a++;
    int c = b *(++a + b % 3);
    cout << (-c-a) << endl;
    cout << b << endl;
    int d = b + 4;
    cout << d << endl; // 9
    cout << b << endl; // 5
    cout << a << endl; // 7
}
