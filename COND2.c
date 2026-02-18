#include <stdio.h>
#include <cs50.h>

// Function prototype
char grade(int marks);

int main(void)
{
    int marks = get_int("Enter marks (0-100): ");
    char g = grade(marks);

    printf("Grade: %c\n", g);
    return 0;
}

// Function definition
char grade(int marks)
{
    if(marks >= 80 && marks <= 100)
        return 'A';
    else if(marks >= 70)
        return 'B';
    else if(marks >= 60)
        return 'C';
    else if(marks >= 50)
        return 'D';
    else
        return 'F';
}
