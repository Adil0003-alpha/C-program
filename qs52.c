/*

*/
#include <stdio.h>

struct employee
{
    int code;
    float salary;
    char name[20];
};

int main()
{
    struct employee e1, e2, e3;

    printf("Enter the e1 code : \n");
    scanf("%d", &e1.code);
    printf("Enter the salary of e1 : \n");
    scanf("%f", &e1.salary);
    printf("Enter the name of e1 : \n");
    scanf("%s", e1.name);

    printf("Enter the e2 code : \n");
    scanf("%d", &e2.code);
    printf("Enter the salary of e2 : \n");
    scanf("%f", &e2.salary);
    printf("Enter the name of e2 : \n");
    scanf("%s", e2.name);

    printf("Enter the e3 code : \n");
    scanf("%d", &e3.code);
    printf("Enter the salary of e3 : \n");
    scanf("%f", &e3.salary);
    printf("Enter the name of e3 : \n");
    scanf("%s", e3.name);
    return 0;
}