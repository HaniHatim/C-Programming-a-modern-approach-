// Write a program that asks the user to enter a dollars-and-cents amount, then displays the amount with 5% tax added

#include <stdio.h>

int main(void)
{
    float amount;
    float tax; 

    printf("Please enter the amount (in decimal places): ");
    scanf("%f", &amount);

    tax = (0.05f * amount) + amount;

    printf("Your amount with added tax would be: %.2f", tax);

    return 0;
}