// TAKE A NUMBER (n) FROM USER  & OUTPUT ITS CUBE(n * n * n).

#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter the n : ");
    scanf("%d", &n);
    int nCube = pow(n, 3);
    printf("Cube of n : %d ", nCube);
    return 0;
}