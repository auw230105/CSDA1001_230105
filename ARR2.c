#include <stdio.h>
#include <cs50.h>


int sum_array(int arr[], int n);

int main(void)
{
    int n = get_int("Enter the number of elements: ");
    int arr[n];

    for(int i = 0; i < n; i++)
        arr[i] = get_int("Enter element %d: ", i+1);

    int sum = sum_array(arr, n);
    float avg = (float)sum / n;

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", avg);

    return 0;
}


int sum_array(int arr[], int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}
