// WRITE A PROGRAM TO CHECK WHETHER A NUMBER IS DIVISIBLE BY 97 OR NOT

#include <stdio.h>

int main()
{
    int num;

    printf("Enter the number :");
    scanf("%d ", &num);
    if (num % 97 == 0)
    {
        printf("%d is divisible by 97 \n", num);
    }
    else
    {
        printf("%d is not divisible by 97 \n", num);
    }

    return 0;
}