// ARITHMETIC OPERATION USING PRECEDENCE AND ASSOCIATIVITY

#include <stdio.h>

int main()
{
    int a = 5 * 2 - 2 * 3;
    int b = 5 * 2 / 2 * 3;
    int c = 5 * (2 / 2) * 3;
    int d = 5 + 2 / 2 * 3; // 2/2 = 1 , 3 * 1 = 3 , 5 + 3 = 8
    printf("result of a %d \n", a);
    printf("result of b %d \n", b);
    printf("result of c %d \n", c);
    printf("result of d %d \n", d);
    return 0;
}
