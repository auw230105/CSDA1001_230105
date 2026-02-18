#include <stdio.h>
#include <cs50.h>

// Function prototype
float fahrenheit(float c);

int main(void)
{
    float c = get_float("Enter temperature in Celsius: ");
    float f = fahrenheit(c);

    printf("%.2f Celsius = %.2f Fahrenheit\n", c, f);
    return 0;
}

// Function definition
float fahrenheit(float c)
{
    return (c * 9 / 5) + 32;
}
