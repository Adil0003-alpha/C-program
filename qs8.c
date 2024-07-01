// WRITE A PROGRAM TO CHECK IF A NUMBER IS ODD OR EVEN

#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("%d is even", num);
    }
    else
    {
        printf("%d is odd", num);
    }

    return 0;
}