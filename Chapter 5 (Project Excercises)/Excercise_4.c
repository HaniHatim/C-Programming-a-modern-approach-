#include <stdio.h>

int main(void)
{
    float value;
    
    printf("Please enter the value in knots in 2 d.p: ");
    scanf("%f", &value);

    if (value < 1.00f && value > 0.00f)
    printf("Calm\n");

    else if (value >= 1.00f && value <= 3.00f)
    printf("Light Air\n");

    else if (value >= 4.00f && value <= 27.00f)
    printf("Breeze\n");

    else if (value >= 28.00f && value <= 47.00f)
    printf("Gale\n");

    else if (value >= 48.00f && value <= 63.00f)
    printf("Storm\n");

    else if (value > 63.00f)
    printf("Hurricane\n");

    else if (value < 0.00f)
    printf("Inncorect value entered\n");

    else
    printf("Inncorect value entered\n");

    return 0;

}