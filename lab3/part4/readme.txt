CSE 202 Lab 3: Arrays and Pointers

4. strncpy() copies the first n characters of source to target and termates it with
   the null character. if source is shorter than n characters, it works just like
   strcpy(). Note target char-array must have enough space to fit the source.

   strcat() concatenates source to end of target. Note target char-array must have
   enough space to fit both source and target.

   Here are strncpy() and strcat() functions:

   void strncpy(char t[], const char s[], const unsigned int n)
   {
       unsigned int i;

       for (i = 0; i < n and s[i]; i++)
       {
           t[i] = s[i];
       }
       t[i] = '\0';
   }

void strcat(char t[], const char s[])
{
    unsigned int i;

       for (i = 0; t[i]; i++); // or i = strlen(t);
       {
           strcpy(t+i, s);
       }
}

   Modify your main() to test correctness of both functions. 
   Give the pointer version of both functions. 
   Test correctness of the new versions. Simply recompile and run!
