#include <stdio.h>
#include <cs50.h>


int max3(int a, int b, int c);

int main(void)
{
    int a = get_int("Enter first number: ");
    int b = get_int("Enter second number: ");
    int c = get_int("Enter third number: ");

    int maximum = max3(a, b, c);
    printf("Maximum value: %d\n", maximum);

    return 0;
}


int max3(int a, int b, int c)
{
    int max = a;
    if(b > max)
        max = b;
    if(c > max)
        max = c;
    return max;
}
