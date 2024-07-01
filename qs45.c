/*
    Write a program to take string as an input
    from user using %c and %s . confirm that the string are equal.
*/

#include <stdio.h>

int main()
{
    char str[30];
    char string[30];
    char c;
    int i = 0;

    printf("Enter the value of first string : \n");
    scanf("%s", str);

    printf("Enter the value of second string : \n");
    while (c != '\n')
    {
        fflush(stdin);
        scanf("%c", &c);
        string[i] = c;
        i++;
    }
    string[i - 1] = '\0';
    printf("The value of str is : %s\n", str);
    printf("The value of string is : %s\n", string);

    return 0;
}