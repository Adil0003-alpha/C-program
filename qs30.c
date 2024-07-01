// Write a program to print the address of a variable. Use this address to get the value of this variable.

#include <stdio.h>

int main()
{
    int num = 3;

    int *address_num = &num;

    printf("the address of num is : \n %d \n", &num);
    printf("the address of num is : \n %u \n", &num);
    printf("the address of num is : \n %d \n", address_num);
    printf("the address of num is : \n %u \n", address_num);

    // the value is print using pointer address
    printf("The value of num is\n %d \n ", *address_num);
    printf("The value of num is\n %d \n ", *(&num));
    return 0;
}