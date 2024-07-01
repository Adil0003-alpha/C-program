// Write a program using fuction to find average of three numbers;
#include <stdio.h>

float average(int a, int b, int c);

int main()
{
    int a, b, c;

    printf("Enter the value of a : \n");
    scanf("%d", &a);
    printf("Enter the value of b : \n");
    scanf("%d", &b);
    printf("Enter the value ofc : \n");
    scanf("%d", &c);

    float Average = average(a, b, c);
    printf("Average of three numbers : %f", Average);

    return 0;
}

float average(int a, int b, int c)
{
    float result;
    result = (a + b + c) / 3;
    return result;
}