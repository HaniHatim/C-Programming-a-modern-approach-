/*
Write a program that prompts the user to enter a telephone number in the form (xxx) xxxxxxx and then displays the number in the form xxx.xxx.xxx:
Enter phone number [(xxx) xxx-xxxx]: (404) 817-6900
You entered 404.817.6900
*/

#include <stdio.h>

int main(void)
{
    int telephone_p1, telephone_p2, telephone_p3;

    printf("Please enter your telephone number: ");
    scanf("(%d) %d-%d", &telephone_p1, &telephone_p2, &telephone_p3);

    printf("Tel: %d.%d.%d", telephone_p1, telephone_p2, telephone_p3);
    return 0;
}

