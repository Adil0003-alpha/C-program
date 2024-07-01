#include <stdio.h>
// Write a program to find grade of  a student given his marks based on percentage

int main()
{
    float marks;

    printf("Enter the student's marks : \n");
    scanf(" %f ", &marks);

    if (marks >= 90 && marks <= 100)
    {
        printf("Your grade is A");
    }
    else if (marks >= 80 && marks < 90)
    {
        printf("Your grade is B ");
    }
    else if (marks >= 70 && marks < 80)
    {
        printf("Your grade is C");
    }
    else if (marks >= 60 && marks < 70)
    {
        printf("Your grade is D ");
    }
    else
    {
        printf("Your are FAIL");
    }

    return 0;
}