/*
    Write a program to read three integers from a file.
*/
#include <stdio.h>

int main()
{
    int num1, num2, num3;
    FILE *ptr;
    ptr = fopen("file.txt", "r");
    fscanf(ptr, "%d %d %d", &num1, &num2, &num3);
    printf("The three integer are :\n %d\n %d\n %d\n", num1, num2, num3);
    return 0;
}