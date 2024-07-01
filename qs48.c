/*
    Write your own version of strcpy function from
    <string.h>
*/
#include <stdio.h>
void Strcpy(char *str1, char *str2)
{
    int i = 0;
    // for (i = 0; str1[i] != '\0'; i++)
    // {
    //     str2[i] = str1[i];
    // }
    while (str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';
}
int main()
{
    char str1[] = "Aditya";
    char str2[10];

    Strcpy(str1, str2);
    printf("%s\n\n", str1);
    printf("%s\n", str1);

    return 0;
}