/*
Write a program that asks the user for a 24-hour time, then displays the time in 12-hour
form:

Enter a 24-hour time: 21:11
Equivalent 12-hour time: 9:11 PM
Be careful not to display 12:00 as 0:00.

*/

#include <stdio.h>

int main(void)
{
    int min, hour;

    printf("Enter the time in 24:00 format: ");
    scanf("%2d:%2d", &hour, &min);

    if (hour > 23 || hour < 0 || min > 59 || min < 0)
    {
        printf("Invlid format entered\n");
        return 0;
    }

    if (hour <= 12 && hour != 0)
    {
        printf("The time is %.2d:%.2d AM\n", hour, min);
    }
    else if (hour > 12)
    {
        hour = hour - 12;
        printf("The time is %.2d:%.2d PM\n", hour, min);
    }
    else if (hour == 0)
    {
        hour = 12;
        printf("The time is %.2d:%.2d PM\n", hour, min);
    }

    return 0;
    
}
