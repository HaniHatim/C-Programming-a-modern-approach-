/*

Write a program that calculates how many digits a number contains:
Enter a number: 374

The number 374 has 3 digits

You may assume that the number has no more than four digits. Hint: Use if statements to
test the number. For example, if the number is between 0 and 9, it has one digit. If the num-
ber is between 10 and 99, it has two digits.

*/

#include <stdio.h>

int main(void)
{
    int num;
    
    printf("Please enter a number: ");
    scanf("%d", &num);

    if (num < 10)
    {
        printf("The number %d has 1 digit\n");
    }
    else if (num < 100)
    {
        printf("The number %d has 2 digits\n");
    }
    else if (num < 1000)
    {
        printf("The number %d has 3 digits\n");
    }
    else if (num < 10000)
    {
        printf("The number %d has 4 digits\n");
    }
    else if (num < 100000)
    {
        printf("The number %d has 5 digits\n");
    }
    else if (num < 1000000)
    {
        printf("The number %d has 6 digits\n");
    }
    else
    {
        printf("The number is above 6 digits\n");
    }

    return 0;
    
}
