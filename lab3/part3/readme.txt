CSE 202 Lab 3: Arrays and Pointers

3. Here is strcpy() function which copies one null-terminated char-array to another.
   Note target char-array must have enough space to accomodate the source.

void strcpy(char t[], const char s[])
{
    for (int i = 0; t[i] = s[i]; i++);
}

Here is the same function using pointers:

void strcpy(char * t, const char * s)
{
    for ( : *t++ = *s++; ) ;
}

Modify your main() to test the correctness of both versions of this function as well.
