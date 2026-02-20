#include <stdio.h>
#include <cs50.h>
#include <stdbool.h>


bool is_leap(int year);

int main(void)
{
    int year = get_int("Enter a year: ");
    if(is_leap(year))
        printf("%d is a Leap Year\n", year);
    else
        printf("%d is Not a Leap Year\n", year);

    return 0;
}


bool is_leap(int year)
{
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return true;
    else
        return false;
}
