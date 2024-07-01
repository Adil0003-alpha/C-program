/*
write a program to sum first ten natural numbers using while loop.
*/
#include <stdio.h>

int main()
{
    int i = 1, num, sum_n_num = 0;
    printf("Enter the number : \n ");
    scanf("%d ", &num);
    printf("sum of first ten natural numbers : \n ");
    while (i <= num)
    {
        sum_n_num += i;
        i++;
    }
    printf("%d \n", sum_n_num);

    return 0;
}