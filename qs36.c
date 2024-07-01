/*
1. addition of number to a pointer
2.subtraction of a number from a pointer
3. subtraction of one pointer to another
4. comparison of two pointer variables

*/
#include <stdio.h>

int main()
{
    int a = 3, add, sub, b = 2, subtract;
    int *ptr = &a;

    // addition of a number from pointer
    add = *ptr + 4;
    printf("The value of ptr is : %d \n", add);

    // subtract a number from pointer
    sub = *ptr - 4;
    printf("The value of ptr is : %d \n", sub);

    int *ptr2 = &b;
    // subtraction between two pointers
    subtract = *ptr - *ptr2;
    printf("subtraction of two pointer is : %d \n", subtract);

    // two pointers points to a single variable ptr and ptr3 points to 'a' variable.
    int *ptr3 = &a;

    printf("the value two different pointers ptr = %d and ptr3 = %d \n", *ptr, *ptr3);
    return 0;
}