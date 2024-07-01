// WRITE A PROGRAM TO CHECK IF A NUMBER IS DIVISIBLE BY 2 OR NOT

#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    if (num % 2 != 0)
    {
        printf("The number is not divisible by 2 : %d", num);
    }
    else
    {
        printf("The number is divisible by 2 : %d", num);
    }

    return 0;
}