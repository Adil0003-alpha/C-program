/*
    Create a two dimensional vector using structure in c
*/

#include <stdio.h>

struct vector
{
    int x;
    int y;
};

int main()
{

    struct vector v1, v2;

    v1.x = 12;
    v1.y = 13;
    printf("X dim is %d and Y dim is %d \n", v1.x, v1.y);
    v2.x = 10;
    v2.y = 15;
    printf("X dim is %d and Y dim is %d \n", v2.x, v2.y);

    return 0;
}