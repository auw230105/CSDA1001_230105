#include <stdio.h>
#include <cs50.h>


int ticket_price(int age, int student);

int main(void)
{
    int age = get_int("Enter age: ");
    int student = get_int("Are you a student? (1 for yes, 0 for no): ");

    int price = ticket_price(age, student);
    printf("Ticket Price: %d\n", price);

    return 0;
}


int ticket_price(int age, int student)
{
    if(age < 12)
        return 50;
    else if(age <= 60)
    {
        if(student == 1)
            return 80;
        else
            return 100;
    }
    else
        return 60;
}
