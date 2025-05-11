/*
Rewrite the program in Programming Project 2 so that it prints the reversal of a three-digit
number without using arithmetic to split the number into digits. 

Hint: See the upc.c program of Section 4.1.
*/

#include <stdio.h>

int main(void)
{
    int num1, num2, num3;

    printf("Please enter three digits: ");
    scanf("%1d%1d%1d", &num1, &num2, &num3);

    printf("The reversed number is: %d%d%d\n", num3, num2, num1);
    return 0;
}
