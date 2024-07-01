/*
    Write a program to accept marks of five students in an array and print them to the screen.
*/
#include <stdio.h>

int main()
{
    int mark[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the marks of students %d :", i + 1);
        scanf("%d", &mark[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the marks of students %d is : %d\n", i + 1, mark[i]);
    }
    return 0;
}