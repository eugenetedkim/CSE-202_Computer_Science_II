CSE 202 Lab 3: Arrays and Pointers

5. Give the pointer version of the function strcmp().
This function returns 0, if the two char-arrays are equal (the same);
a negative number, if target is < than source; and a positive number, if the target is > source. 
Here are a few examples:

strcmp("abc", "abc") returns 0 
strcmp("abc", "abe") returns -2 
strcmp("abcdefg", "abe") returns -2 
strcmp("ab", "aaa") returns 1 
strcmp("abcd", "abc") returns 100 
strcmp("abc", "abcd") returns -100

If the two strings are not equal, this function returns the difference 
between the ASCII code of the characters where the first discrepancy occurs.
