#include <stdio.h>
#include <cs50.h>

// Function prototypes
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int remainder_fun(int a, int b);

int main(void)
{
    int a = get_int("Enter first integer: ");
    int b = get_int("Enter second integer: ");

    printf("Addition: %d + %d = %d\n", a, b, add(a, b));
    printf("Subtraction: %d - %d = %d\n", a, b, subtract(a, b));
    printf("Multiplication: %d * %d = %d\n", a, b, multiply(a, b));
    printf("Remainder: %d %% %d = %d\n", a, b, remainder_fun(a, b));

    return 0;
}

// Function definitions
int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int remainder_fun(int a, int b)
{
    return a % b;
}
