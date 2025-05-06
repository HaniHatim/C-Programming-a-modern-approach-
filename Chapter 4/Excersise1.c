#include <stdio.h>

int main(void)
{
    int num1, num2;

    printf("Enter a two digit number: ");
    scanf("%d",&num1);

    num2 = num1;

    num1 = num1%10;
    num2 = num2/10;

    printf("%d%d\n", num1, num2);

    return 0;
}
