/*
    write a program to read a text file character by character and write its content twice in a separate file.
*/

#include <stdio.h>

int main()
{
    int num;
    char c;
    FILE *ptr;
    FILE *ptr2;

    ptr = fopen("file.txt", "r");
    ptr2 = fopen("file2.txt", "w");
    c = fgetc(ptr);
    while (c != EOF)
    {
        fputc(c, ptr2);
        c = fgetc(ptr);
    }

    fclose(ptr);
    fclose(ptr2);

    return 0;
}