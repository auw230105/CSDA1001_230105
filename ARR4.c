#include <stdio.h>
#include <cs50.h>


long factorial(int n);

int main(void)
{
    int n = get_int("Enter a number (>=0): ");
    long fact = factorial(n);

    printf("Factorial of %d = %ld\n", n, fact);
    return 0;
}


long factorial(int n)
{
    long result = 1;
    for(int i = 1; i <= n; i++)
        result *= i;
    return result;
}
