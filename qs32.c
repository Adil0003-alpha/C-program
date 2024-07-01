/*
Write a program to change the value of a variable to 10 times of its current value.
Write a function and pass the value by reference
*/

#include <stdio.h>

void fun(int *x);

int main()
{
    int i = 3;
    printf(" i Before increament 10 times : %d\n", i);
    fun(&i);
    printf("i After increament 10 times : %d\n ", i);
    return 0;
}
void fun(int *x)
{
    int temp;
    temp = *x;
    temp = temp * 10;
    *x = temp;
}