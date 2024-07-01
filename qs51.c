/*
    write a program to check whether a given character is present in a string or not.
*/

#include <stdio.h>

int charCheck(char st[], char c)
{
    char *ptr = st;
    int count = 0;

    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            printf("Characters is present in string : %c\n", c);
            count++;
        }
        ptr++;
    }

    return count;
}

int main()
{
    char st[] = "Hello ! your mother calling you.";

    int count = charCheck(st, 'o');
    printf("Character occurence is : %d\n", count);

    return 0;
}