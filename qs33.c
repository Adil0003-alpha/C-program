/*
Write a program using a function which calculate the sum and average of two numbers.
Use pointerd and print the value of sum and average in main().
*/

#include <stdio.h>
void sumAndAvg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)(*sum) / 2;
}
int main()
{
    int num1 = 2, num2 = 3, sum;
    float avg;
    sumAndAvg(num1, num2, &sum, &avg);

    printf("The value of sum is : %d \n", sum);
    printf("The value of avg is : %.2f \n", avg);
    return 0;
}