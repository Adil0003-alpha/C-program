// WRITE A PROGRAM TO CALCULATE PERIMETER OF RECTANGLE, TAKE SIDE, a & b  FROM THE USER

#include <stdio.h>

int main()
{
    float a, b;
    printf("Enter a & b : \n");
    scanf("%f %f ", &a, &b);

    float perOfRectangle = 2 * (a * b);
    printf("perimeter of rectangle is : %f ", perOfRectangle);

    return 0;
}