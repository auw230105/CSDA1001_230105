#include <stdio.h>
#include <cs50.h>


int sign(int n);

int main(void)
{
    int n = get_int("Enter a number: ");
    int result = sign(n);

    if(result == 1)
        printf("%d is Positive\n", n);
    else if(result == -1)
        printf("%d is Negative\n", n);
    else
        printf("%d is Zero\n", n);

    return 0;
}


int sign(int n)
{
    if(n > 0)
        return 1;
    else if(n < 0)
        return -1;
    else
        return 0;
}
