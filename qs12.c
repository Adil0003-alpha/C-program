// Write a program to find out whether a student is pass or fail. if it require total 40% and at least 33% in each subject to pass.

#include <stdio.h>

int main()
{
    int math, cs, eng;

    printf("Enter the mark of student math , cs and eng : \n");
    scanf("%d \n %d \n %d \n ", &math, &cs, &eng);
    float result = (math + cs + eng / 3);

    if (result < 40 || math < 33 || cs < 33 || eng < 33)
    {
        printf("Your are fail and your percentage is %f \n ", result);
    }
    else
    {
        printf("Your are pass and your percentage is %f \n ", result);
    }

    return 0;
}