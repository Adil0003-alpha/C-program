#include <stdio.h>
#include <math.h>

//Write a program to print power of a number

int main()
{
    int x, y;
    printf("Enter a number and Enter the power of number :");
    scanf("%d %d ", &x, &y);

    int result = pow(x, y);
    printf("The power of 2 is %d", result);
    return 0;
}