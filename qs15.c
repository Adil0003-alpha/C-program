// Write a program  to find wether a year entered by the user is a leap year or not. take year as an input from the user

#include <stdio.h>

int main()
{
    // int year;

    // printf("Enter the year : \n ");
    // scanf("%d ", &year);

    // if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
    // {
    //     printf("The Year is leap year %d \n", year);
    // }
    // else
    // {
    //     printf("This is not leap year %d \n", year);
    // }

    // Find the leap years between given range
    int st_year, end_year;

    printf("Enter starting year : \n");
    scanf("%d ", &st_year);

    printf("Enter ending year : \n");
    scanf("%d ", &end_year);
    printf("The Leap_Years between  %d and %d are \n\n : ", st_year, end_year);
    for (int leap_years = st_year; leap_years <= end_year; leap_years++)
    {
        if (((leap_years % 4 == 0) && (leap_years % 100 != 0)) || (leap_years % 400 == 0))
        {
            printf("%d ", leap_years);
        }
    }

    return 0;
}