#include <stdio.h>
int main()
{
    float c, f;

    printf("\nEnter the temperature in Celcius : ");
    scanf("%f", &c);

    f = (c * (9.0 / 5.0)) + 32.0;
    // f = (c * (9 / 5)) + 32; this will not work because of type conversion
    // therefore instead of integers we should use decimal numbers

    printf("\nTemperature in Fahrenheit : %f", f);

    return 0;
}