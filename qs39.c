/*
     Create an array of 10 numbers. Verify using pointer arithmetic that (ptr + 2) points to the third element
      where ptr is a pointer pointing to the first element of the array.
*/
#include <stdio.h>

int main()
{

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = &arr[0];
    // int *ptr = arr;
    ptr += 2;
    if (ptr == &arr[2])
    {
        printf("The pointer points to the third element and value is: %d \n", *ptr);
    }
    else
    {
        printf("The pointer do not points to the third element and value is: %d \n", *ptr);
    }

    return 0;
}