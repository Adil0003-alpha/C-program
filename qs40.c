/*
    Write a program to create an array of 10 integers and store multiplication table of 5 in it. and using user input
*/
#include <stdio.h>

int main()
{
    int mul_arr[10], n, mul_table;
    printf("Enter the number to be multply : \n");
    scanf("%d", &n);

    printf("the multiplication table of 5 are : \n");
    // for (int i = 0; i < 10; i++)
    // {
    //     mul_arr[i] = 5 * (i + 1);
    // }

    // for (int i = 0; i < 10; i++)
    // {
    //     printf("5 x %d = %d \n", i + 1, mul_arr[i]);
    // }
    for (int i = 01; i <= 10; i++)
    {
        mul_table = n * i;
        printf("%d x %d = %d \n", n, i, mul_table);
    }

    return 0;
}