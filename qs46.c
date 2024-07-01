/*
    Write your own version of strlen function from
    <string.h>
*/
#include <stdio.h>
int strlen(char *st)
{
    char *ptr = st;
    int lenght = 0;
    while (*ptr != '\0')
    {
        lenght++;
        ptr++;
    }
    return lenght;
}
int main()
{
    char st[] = "Aditya";

    int len = strlen(st);
    printf("%d", len);
    return 0;
}