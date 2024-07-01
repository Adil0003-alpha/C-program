/*
     Write a program to encrypt a string by adding 1 to the   ascii value of its character.
*/

#include <stdio.h>

void encrypt(char *c)
{
    char *ptr = c;
    while (*ptr != '\0')
    {
        *ptr = *ptr + 1;
        *ptr++;
    }
}
void decrypt(char *c)
{
    char *ptr = c;
    while (*ptr != '\0')
    {
        *ptr = *ptr - 1;
        *ptr++;
    }
}

int main()
{
    char c[] = "I love You";
    encrypt(c);
    printf("Encrypted message is : %s\n", c);
    decrypt(c);
    printf("Decrypted message is : %s\n", c);
    return 0;
}