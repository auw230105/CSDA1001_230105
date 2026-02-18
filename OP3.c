#include <stdio.h>
#include <cs50.h>
#include <stdbool.h>

// Function prototype
bool is_even(int n);

int main(void)
{
    int n = get_int("Enter a number: ");

    if (is_even(n))
    {
        printf("%d is Even\n", n);
    }
    else
    {
        printf("%d is Odd\n", n);
    }

    return 0;
}

// Function definition
bool is_even(int n)
{
    return n % 2 == 0;
}
