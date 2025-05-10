// The digits 0 13800 15173 5

#include <stdio.h>

int main(void)
{
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, check;
    int sum_1, sum_2;

    printf("Please enter the UPC number: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11);

    printf("Enter the check digit to compare: ");
    scanf("%1d", &check);

    sum_1 = (n1 + n3 + n5 + n7 + n9 + n11) * 3;

    sum_2 = ((n2 + n4 + n6 + n8 + n10) + sum_1) - 1;
    sum_2 = 9 - (sum_2 % 10);

    if (sum_2 == check)
    printf("VALID\nCalculated Sum: %d\n", sum_2);

    else if (sum_2 != check)
    printf("INVALID\nCalculated Sum: %d\n", sum_2);

    return 0;

}