// Write a function to convert celcius temperature into fareheit.

#include <stdio.h>

float tempConverters(float temperature);

int main()
{
    float temperature, tempConverter;
    printf("Enter the Value of temperature : \n");
    scanf("%f", &temperature);

    tempConverter = tempConverters(temperature);
    printf(" %.2f Celsius = %.2f Fahrenheit\n", temperature, tempConverter);

    return 0;
}

float tempConverters(float temperature)
{
    float result = (temperature * 9 / 5) + 32;
    return result;
}