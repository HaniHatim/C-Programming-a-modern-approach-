#include <stdio.h>

int main(void)
{
    int numerator_1, numerator_2;
    int denominator_1, denominator_2;
    int result_1, result_2;

    printf("Please enter the first fraction in the form of numerator/denominator: ");
    scanf("%d/%d", &numerator_1, &denominator_1);

    printf("\nPlease enter the second fraction in the form of numerator/denominator: ");
    scanf("%d/%d", &numerator_2, &denominator_2);

    result_1 = ((numerator_1 * denominator_2 ) + (numerator_2 * denominator_1)); 
    result_2 = (denominator_1 * denominator_2);

    printf("\nThe result is: %d/%d\n", result_1, result_2);

    return 0;
}