#include <stdio.h>
// write a program to print multiplication of table of a given number n.
// also multiplication of 10 in reversed order.
int main()
{
    int n;
    printf("Enter the value of n :\n ");
    scanf("%d ", &n);
    printf("The multiplication of a given num is :\n ");
    for (int i = 0; i < n; i++)
    {
        int mul_n = n * i;
        printf(" %d \n", mul_n);
    }

    printf("\n\n Reverse multiplication of given num is : \n");
    for (int i = n; i; i--)
    {
        int rev_mul_n = n * i;
        printf("%d \n", rev_mul_n);
    }
  
    return 0;
}