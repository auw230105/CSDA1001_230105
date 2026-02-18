#include <stdio.h>
#include <cs50.h>

// Function prototype
void count_even_odd(int arr[], int n, int *even, int *odd);

int main(void)
{
    int n = get_int("Enter number of elements: ");
    int arr[n];

    for(int i = 0; i < n; i++)
        arr[i] = get_int("Enter element %d: ", i+1);

    int even = 0, odd = 0;
    count_even_odd(arr, n, &even, &odd);

    printf("Even count: %d\n", even);
    printf("Odd count: %d\n", odd);

    return 0;
}

// Function definition
void count_even_odd(int arr[], int n, int *even, int *odd)
{
    *even = 0;
    *odd = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
            (*even)++;
        else
            (*odd)++;
    }
}
