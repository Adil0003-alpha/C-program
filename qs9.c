// PRINT 1 (TRUE) OR 0 (FALSE) FOR FOLLOWING STATEMENT

#include <stdio.h>

int main()
{
    int isSunday;
    int isSnowing;

    printf("Enter day :");
    scanf("%d", &isSunday);
    printf("Enter situation :");
    scanf("%d", &isSnowing);

    if (isSunday == 1 && isSnowing == 1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
   
    return 0;
}