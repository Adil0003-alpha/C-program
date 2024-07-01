// Write a program to using function to print the following pattern (first n lines).
#include <stdio.h>
void pattern(int n);
int main()
{
    int star;
    printf("Enter the number of stars :\n");
    scanf("%d", &star);

    pattern(star);

    return 0;
}
void pattern(int n)
{
    if (n == 1)
    {
        printf("*\n");
        return;
    }
    pattern(n - 1);
    for (int i = 0; i < (2 * n - 1); i++)
    {
        printf("*");
    }
    printf("\n");
}