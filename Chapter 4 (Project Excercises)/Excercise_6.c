#include <stdio.h>

int main(void)
{
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12;
    int sum_1, sum_2;

    printf("Please enter the 12 digit code for EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12);

    sum_1 = (n2 + n4 + n6 + n8 + n10 + n12) * 3;
    
    sum_2 = ((n1 + n3 + n5 + n7 + n9 + n11) + sum_1) - 1;
    sum_2 = 9-(sum_2 % 10);

    printf("The check sum is: %d\n", sum_2);
    return 0;
}