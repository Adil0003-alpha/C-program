#include <stdio.h>
// Calculate income tax paid by an employee to the government as per the slabs mention below :
/* income slabc             tax
   2.5lakh - 50lakh          5%
   50lakh - 10lakh           20%
   above 10lakh              30%

   no tax for below 2.5lakh salary and salary take from user

*/
int main()
{
    float salary, tax = 0;

    printf("Enter the employee salary : \n");
    scanf("%f ", &salary);

    if (salary >= 0 && salary <= 250000)
    {
        printf("Your tax is 0%");
        tax = tax + 0;
    }

    if (salary >= 250000 && salary <= 500000)
    {
        tax = tax + 0.05 * (salary - 250000);
        printf("Your tax is 5% :,\n tax = %f ", tax);
    }
    if (salary >= 500000 && salary <= 1000000)
    {
        tax = tax + 0.20 * (salary - 500000);
        printf("Your tax is 20% :,\n tax = %f ", tax);
    }
    if (salary >= 1000000) 
    {
        tax = tax + 0.30 * (salary - 1000000);
        printf("Your tax is 30% :,\n tax = %f ", tax);
    }

    return 0;
}