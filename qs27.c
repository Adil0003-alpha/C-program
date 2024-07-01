//how functions take agument. when you pass an argument to a function.
#include<stdio.h>

int main(){
    int a = 3;
    //arguments are passes to a function from right to left order.
    printf("%d %d %d \n", a, ++a, a++);

    return 0;
}