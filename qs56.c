/*

*/

#include <stdio.h>

typedef struct date
{
    int date;
    int month;
    int year;
    int hour;
    int min;
    int sec;
} date;
void display(date d1, date d2)
{
    printf("The date is : %d/%d/%d  time - %d : %d : %d\n", d1.date, d1.month, d1.year, d1.hour, d1.min, d1.sec);
    printf("The date is : %d/%d/%d  time - %d : %d : %d\n", d2.date, d2.month, d2.year, d2.hour, d2.min, d2.sec);
}

int dateCmp(date d1, date d2)
{
    if (d1.year > d2.year)
    {
        return 1;
    }
    if (d1.year < d2.year)
    {
        return -1;
    }

    if (d1.month > d2.month)
    {
        return 1;
    }
    if (d1.month < d2.month)
    {
        return -1;
    }

    if (d1.date > d2.date)
    {
        return 1;
    }
    if (d1.date < d2.date)
    {
        return -1;
    }

    if (d1.hour > d2.hour)
    {
        return 1;
    }
    if (d1.hour < d2.hour)
    {
        return -1;
    }

    if (d1.min > d2.min)
    {
        return 1;
    }
    if (d1.min < d2.min)
    {
        return -1;
    }

    if (d1.sec > d2.sec)
    {
        return 1;
    }
    if (d1.sec < d2.sec)
    {
        return -1;
    }

    return 0;
}

int main()
{
    date d1 = {2, 11, 21, 03, 45, 55};
    date d2 = {5, 11, 21, 03, 46, 55};

    display(d1, d2);
    int cmpResult = dateCmp(d1, d2);
    printf("Date Comparison function return : %d\n", cmpResult);
    return 0;
}