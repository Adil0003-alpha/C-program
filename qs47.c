/*
    write a function slice() to slice a string .
    It should change the original string such that it
    is now the sliced string. Take m and n as the start
    and ending position for slice.
*/
#include <stdio.h>
void slice(char *str, int m, int n)
{
    int i = 0;
    while ((m + i) < n)
    {
        str[i] = str[i + m];
        i++;
    }
    str[i] = '\0';
}
int main()
{
    char str[] = "Aditya";
    slice(str, 1, 4);
    printf("%s", str);
    return 0;
}
