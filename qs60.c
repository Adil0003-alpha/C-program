/*
   Take name and salary of two employees as input from user and write them to a text file.
*/

#include <stdio.h>

int main()
{
    // char name[10];
    float salary;
    char name[10];

    float salary2;
    char name2[10];
    FILE *ptr;

    printf("Enter the name : \n");
    scanf("%s", name);

    printf("Enter Salary : \n");
    scanf("%f", &salary);

    printf("Enter the name : \n");
    scanf("%s", name2);

    printf("Enter Salary : \n");
    scanf("%f", &salary2);

    ptr = fopen("empData.txt", "w");
    fprintf(ptr, "%s , %.3f\n", name, salary);
    fprintf(ptr, "%s , %.3f\n", name2, salary2);

    fclose(ptr);
    return 0;
}