/*
    write a program contaning functions which counts the number of positive interger in an array.
*/

#include <stdio.h>

int check_positive(int *arr, int num)
{
    for (int i = 0; i < num; i++)
    {
        int temp;
        if (arr[i] > 0)
        {
            temp = arr[i];
            printf("%d\n", temp);
        }
    }
}

int main()
{
    int num_arr[] = {1, 2, 3, 4, 5, -2, -3, -5, 7, 8, 9, 10};

    printf("The postive numbers are in array : \n");
    check_positive(num_arr, 12);

    // APPROACH TRAIL
    // for (int i = 0; i < 8; i++)
    // {
    //     int temp;
    //     if (num_arr[i] > 0)
    //     {
    //         temp = num_arr[i];
    //         printf("%d\n", temp);
    //     }
    // }

    return 0;
}