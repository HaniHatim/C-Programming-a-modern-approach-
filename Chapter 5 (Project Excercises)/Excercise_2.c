#include <stdio.h>

int main(void)
{
    int min, hour;

    printf("Enter the time in 24:00 format: ");
    scanf("%2d:%2d", &hour, &min);

    if (hour > 23 || hour < 00 || min > 60 || min < 00)
    {
        printf("Invlid format entered\n");
        return 0;
    }

    if (hour <= 12 && hour != 00)
    {
        printf("The time is %.2d:%.2d AM\n", hour, min);
    }
    else if (hour > 12)
    {
        hour = hour - 12;
        printf("The time is %.2d:%.2d PM\n", hour, min);
    }
    else if (hour == 00)
    {
        hour = 12;
        printf("The time is %.2d:%.2d PM\n", hour, min);
    }

    return 0;
    
}
