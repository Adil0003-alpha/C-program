/*
    Write a program containing a function which reverse the array passes to it.
*/

#include <stdio.h>
void reverse_arr(int *arr, int size)
{
    int temp;
    for (int i = 0; i < (size / 2); i++)
    {
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    reverse_arr(arr, 6);
    // for (int i = 0; i < 6; i++)
    // {
    //     printf(" the value of %d element is: %d\n", i, arr[i]);
    // }

    return 0;
}