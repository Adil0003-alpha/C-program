// Write a program having a variable i. Print the address of i. Pass this variable to a function and print its address. Are these address same? why?
#include <stdio.h>

void check_address(int j);
int main()
{
    int i = 3;

    int *address_i = &i;

    // printf("The address of i is : %d \n ", address_i);
    printf("The address of i is : %u \n ", address_i);

    check_address(i);

    return 0;
}
void check_address(int j)
{
    printf("The address of j is : %u \n", &j);
}