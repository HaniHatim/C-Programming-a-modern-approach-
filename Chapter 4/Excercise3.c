#include <stdio.h>

int main(void)
{
    int num1, num2, num3;

    printf("Please enter three digits: ");
    scanf("%1d%1d%1d", &num1, &num2, &num3);

    printf("The reversed number is: %d%d%d\n", num3, num2, num1);
    return 0;
}