#include <stdio.h>

int main()
{
    int i, num, mul, sum = 0;

    printf("Enter the number : \n");
    scanf("%d", &num);

    printf("multiplication of numbers :\n ");

    for (i = 1; i < num; i++)
    {
        mul = num * i;
        printf("%d \n", mul);

        sum += mul;
    }
    printf("sum of multiplied numbers : %d \n", sum);

    return 0;
}