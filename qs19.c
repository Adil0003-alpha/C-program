#include <stdio.h>

int main()
{
    int num, factorial = 1;
    printf("Enter the number : \n");
    scanf("%d ", &num);

    printf("The factorial of given numbers : \n");
    for (int i = 1; i < num; i++)
    {
        factorial *= i;
        printf("%d \n", factorial);
    }

    return 0;
}