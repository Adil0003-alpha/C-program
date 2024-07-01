/*
    Write a program to generate multiplication table of a given number in text format.
*/

#include <stdio.h>

int main()
{
    int num;
    FILE *ptr;
    printf("Enter the number to be multiply \n");
    scanf("%d", &num);
    ptr = fopen("mulTable.txt", "w");
    for (int i = 0; i < 10; i++)
    {
        fprintf(ptr, "%d X %d = %d \n", num, i + 1, num * (i + 1));
    }
    fclose(ptr);
    printf("Your Table is generated \n");
    return 0;
}