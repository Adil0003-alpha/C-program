/*
Write a program to change the value of a variable to 10 times of its current value.
Write a function and pass the value by call by value
*/

#include <stdio.h>
int funToVarifyVal(int x);
int main()
{
    int num = 3;
    printf("num Before increament : %d \n", num);
    funToVarifyVal(num);
    printf("num After increament : %d \n", num);

    return 0;
}
int funToVarifyVal(int x)
{
    int temp = x;
    temp = temp * 10;
    x = temp;
}