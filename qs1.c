// WRITE A PROGRAM TO CALCULATE AREA OF SQUARE

#include <stdio.h>

int main()
{
    float side;
    printf("\n Enter the value of side: \t");
    scanf("%f", &side);

    float areaOfSquare = side * side;
    printf("Area of Square is : \t %.2f", areaOfSquare);

    return 0;
}