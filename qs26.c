// Write a program using recursion to calculate nth element of fibonacci series.
#include <stdio.h>

int fibonacci(int n);

int main()
{
    int n, fbSeries;
    printf("Enter the n : \n");
    scanf("%d", &n);

    printf("The Fibonacci Series is : \n");
    for (int i = 0; i < n; i++)
    {
        fbSeries = fibonacci(i);
        printf(" %d, ", fbSeries);
    }

    return 0;
}
int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }

    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}