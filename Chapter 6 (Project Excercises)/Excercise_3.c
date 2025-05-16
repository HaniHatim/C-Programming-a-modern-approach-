/*
Write a program that asks the user to enter a fraction, then reduces the fraction to lowest
terms:

Enter a fraction: 6/12
In lowest terms: 1/2

Hint: To reduce a fraction to lowest terms, first compute the GCD of the numerator and
denominator. Then divide both the numerator and denominator by the GCD
*/

#include <stdio.h>

int main(void)
{
    int m, n, reminder;
    int user_m, user_n;

    printf("Enter a fraction (int the form m/n): ");
    scanf("%d/%d", &m, &n);

    user_m = m;
    user_n = n;

    while (n != 0)
    {
        reminder = m % n;
        m = n;
        n = reminder;
    }

    printf("In Lowest terms: %d/%d\n", user_m = user_m / m, user_n = user_n / m);
 
    return 0;
}