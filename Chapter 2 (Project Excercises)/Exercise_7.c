/*
Write a program that asks the user to enter a U.S. dollar amount and then shows how to pay
that amount using the smallest number of $20, $10, $5, and $1 bills:
*/

#include <stdio.h>

int main(void)
{
    int amount;
    int new_amount;

    printf("Please enter the amount: ");
    scanf("%d", &amount);

    new_amount = amount / 20;

    printf("20$ Dollar Bill: %d\n", new_amount);

    amount = amount - (new_amount * 20);
    new_amount = amount / 10;

    printf("10$ Dollar Bill: %d\n", new_amount);

    amount = amount - (new_amount * 10);
    new_amount = amount / 5;

    printf("5$ Dollar Bill: %d\n", new_amount);

    amount = amount - (new_amount * 5);
    new_amount = amount / 1;

    printf("1$ Dollar Bill: %d\n", new_amount);

    return 0;
}