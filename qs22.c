// calculate the factorial of given number using Recursion.
#include <stdio.h>
int factorial(int n);
int main()
{
    int n, Factorial;
    printf("Enter the n : \n ");
    scanf("%d", &n);

    Factorial = factorial(n);
    printf("Factorial of %d is : %d\n", n, Factorial);
    return 0;
}
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}