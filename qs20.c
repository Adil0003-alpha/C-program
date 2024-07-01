// write a program to check whether a given number is prime or not using loop.
#include <stdio.h>

int main()
{
    int i = 1, number, prime = 0;

    printf("Enter the number : \n ");
    scanf("%d", &number);

    // for (int i = 1; i <= number; i++)
    // {
    //     if (number % i == 0)
    //     {
    //         prime++;
    //     }
    // }
    while (i <= number)
    {
        if (number % i == 0)
        {
            prime++;
        }
        i++;
    }

    if (prime == 2)
    {
        printf("The number is prime ");
    }
    else
    {
        printf("The number is not prime ");
    }

    return 0;
}