// Use the library functions to calculate the area of a square with side a.
#include <stdio.h>
#include <math.h>

float square(float a);

int main()
{
    float side, areaSquare;
    printf("Enter the value of side :\n");
    scanf("%f", &side);
    areaSquare = square(side);
    printf("Area of square : %f \n", areaSquare);
    return 0;
}
float square(float a)
{
    float Areasquare = pow(a, 2);
    return Areasquare;
}
