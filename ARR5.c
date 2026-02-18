#include <stdio.h>
#include <cs50.h>
#include <stdbool.h>

// Function prototype
bool is_palindrome(int arr[], int len);

int main(void)
{
    int n = get_int("Enter a number: ");
    int temp = n;
    int digits[10]; // assuming max 10 digits
    int len = 0;

    // Store digits into array
    while(temp > 0)
    {
        digits[len] = temp % 10;
        temp /= 10;
        len++;
    }

    // Check palindrome
    if(is_palindrome(digits, len))
        printf("%d is a Palindrome\n", n);
    else
        printf("%d is Not a Palindrome\n", n);

    return 0;
}

// Function definition
bool is_palindrome(int arr[], int len)
{
    for(int i = 0; i < len / 2; i++)
    {
        if(arr[i] != arr[len - i - 1])
            return false;
    }
    return true;
}
