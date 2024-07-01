/*
    create a 2-D array by taking input from the user. Write a display function to print the content of this 2-D array in the screen.
*/
#include <stdio.h>

int display(int n_stu, int n_sub, int arr[n_stu][n_sub]);

int main()
{
    int n_stu = 4;
    int n_sub = 3;
    int arr[4][3];

    display(n_stu, n_sub, arr[n_stu][n_sub]);
    return 0;
}
int display(int n_stu, int n_sub, int arr[n_stu][n_sub])
{
    int i, j;
    for (i = 0; i < n_stu; i++)
    {
        for (j = 0; j < n_sub; j++)
        {
            printf("Enter the marks of student %d in subject %d\n", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < n_stu; i++)
    {
        for (j = 0; j < n_sub; j++)
        {
            printf(" the marks of student %d in subject %d is : %d\n", i + 1, j + 1, arr[i][j]);
        }
    }
}