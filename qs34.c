/*
Write a program to print the value of a variable i by using "Pointer to Pointer "
type of variable.
*/
#include <stdio.h>

int main()
{
    int i = 3;

    int *ptr = &i;
    int **ptrToPtr = &ptr;
    printf("The value of i is : %d \n", **ptrToPtr);
    return 0;
}