// Write a function to calculate force of attraction on a body of mass m exerted by earth.

#include <stdio.h>

float force(float mass);

int main()
{
    float mass, Force;
    printf("Enter the value of mass : \n");
    scanf("%f", &mass);
    Force = force(mass);
    printf("The force in newton is %.2f \n", Force);

    return 0;
}
float force(float mass)
{
    float result = mass * 9.8;
    return result;
}