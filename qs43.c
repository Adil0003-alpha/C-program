#include <stdio.h>

// int arr_mul_table(int *mul_tables, int n, int m, int l);
/*
void printTable(int *mulTable, int num, int n)

{
    printf("The multiplication table of %d is:\n", num);
    for (int i = 0; i < n; i++)
    {
        mulTable[i] = num * (i + 1);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d X %d = %d \n", num, i + 1, mulTable[i]);
    }
}
*/
void printTable(int *mulTable, int num, int n, int row)
{
    printf("The multiplication table of %d is:\n", num);

    for (int row = 0; row < n; row++)
    {
        mulTable[row] = num * (row + 1);
    }
    for (int row = 0; row < n; row++)
    {
        printf(" %d X %d = %d \n", num, row + 1, mulTable[row]);
    }
}

int main()
{
    // int n, m, l;

    // printf("Enter any three numbers to be multply : \n");
    // scanf("%d %d %d", &n, &m, &l);

    // int mul_arr[3][10];

    // printf("the multiplication table of 3 numbers are : \n");
    // arr_mul_table(&mul_arr[3][10], n, m, l);

    //   int mulTable[3][10];
    // printTable(mulTable[0], 2, 10);
    // printTable(mulTable[1], 7, 10);
    // printTable(mulTable[2], 9, 10);

    int number, row = 0;

    printf("Enter the number to be multiply : \n");
    scanf("%d", &number);

    int mulTable[row][10];
    row++;

    printTable(mulTable[row], number, 10, row);
    number++;
    printTable(mulTable[row], number, 10, row);
    number++;
    printTable(mulTable[row], number, 10, row);
    number++;
    printTable(mulTable[row], number, 10, row);
    return 0;
}

/*
int arr_mul_table(int *mul_tables, int n, int m, int l)
{
    for (int i = 1; i <= 10; i++)
    {
        mul_tables = n * i;
        printf("%d x %d = %d \n", n, i, mul_tables);
    }
    for (int i = 1; i <= 10; i++)
    {
        mul_tables = m * i;
        printf("%d x %d = %d \n", m, i, mul_tables);
    }
    for (int i = 1; i <= 10; i++)
    {
        mul_tables = l * i;
        printf("%d x %d = %d \n", l, i, mul_tables);
    }

}
*/