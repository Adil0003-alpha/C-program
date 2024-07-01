// Write a recursive function to calculate the sum of first n natural numbers.

#include <stdio.h>

int Nsum(int n);

int main()
{
    int n, naturalNumSum;
    printf("Enter the value of n : \n");
    scanf("%d", &n);
    printf("The sum of first n natural numbers is :\n");
    for (int i = 0; i <= n; i++)
    {
        naturalNumSum = Nsum(i);
        printf("%d \n", naturalNumSum);
    }

    return 0;
}
int Nsum(int n)
{
    // if (n != 0)
    // {
    //     return n + Nsum(n - 1);
    // }
    // else
    // {
    //     return n;
    // }
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n + Nsum(n - 1);
    }
}