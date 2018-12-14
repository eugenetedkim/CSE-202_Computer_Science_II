CSE 202 Lab 3: Array and Pointers

1. Perform the following exercises under lab3 sub directory.

2. Here is strlen() function which returns the length of a null-terminated character-array:

- What is a character-array?

- What does null-terminated mean?

unsigned int strlen(const char s[])
{
    unsigned int n;
    for (n = 0; s[n]; n++); // same as s[n] != '\0'
    return n;
}

Here is the same function using pointers:

unsigned int strlen(const char * s)
{
    unsigned int n;
    for (n = 0; *(s+n); n++);
    return n;
}

Write your own main() to test the correctness of both versions of this function.
