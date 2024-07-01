// WRITE A PROGRAM TO CALCULATE AREA OF CIRCLE

#include <stdio.h>

int main()
{
    float radius, pi;
    printf("Enter the pi : \n ");
    scanf("%f", &pi);
    printf("Enter the radius : \n ");
    scanf("%f", &radius);

    float areaOfCircle = pi * radius * radius;
    printf("Area of Circle is : %f \n", areaOfCircle);
    return 0;
}