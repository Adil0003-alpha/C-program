/*
    Write a program to modify a file containing an integer to double its value.
*/

#include <stdio.h>

int main()
{
    int num;
    FILE *ptr;

    ptr = fopen("file2.txt", "r");
    fscanf(ptr, "%d", &num);
    ptr = fopen("file2.txt", "w");
    fprintf(ptr, "%d", num * 2);

    printf("%d", num);

    return 0;
}