CSE 202 Lab 3: Arrays and Pointers

6. Try all your functions with the following main() function.

main()
{
    char str1[20] = "abcd", str2[20] = "efg";

    cout << "str1=" << str1<< " str2=" << str2 << endl;
    cout << "strlen(str1)=" << strlen(str1)<< " strlen(str2)=" << strlen(str2) << endl;

    strcpy(str1, str2);
    cout << "str1=" << str1 << endl;

    strcat(str1, str2);
    cout << "str1=" << str1 << endl;

    cout << "strcmp(str1, str2)=" << strcmp(str1, str2) << endl;
    cout << "strcmp(str2, \"efh\")=" << strcmp(str2, "efh") << endl;

    strncpy(str2, "hi jkl", 2);
    cout << "str2=" << str2 << endl;

    strncpy(str2, "hi jkl", 12);
    cout << "str2=" << str2 << endl;
}

The output should be:

$ a.out
str1=abcd str2=efg
strlen(str1)=4 strlen(str2)=3
str1=efg
str1=efgefg
strcmp(str1, str2)=101
strcmp(str2, "efh")=-1
str2=hi
str2=hi jkl
$

