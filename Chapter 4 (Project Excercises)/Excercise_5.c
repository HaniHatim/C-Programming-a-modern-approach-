/* 
Rewrite the upc.c program of Section 4.1 so that the user enters 11 digits at one time,
instead of entering one digit, then five digits, and then another five digits.

Enter the first 11 digits of a UPC: 01380015173
Check digit: 5
*/

#include <stdio.h>

int main(void)
{
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11;
    int sum_1, sum_2, check;


    printf("Please enter the 11 digits of the UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11);

    sum_1 = (n1 + n3 + n5 + n7 + n9 + n11) * 3;
    
    sum_2 = ((n2 + n4 + n6 + n8 + n10) + sum_1) - 1;
    sum_2 = 9-(sum_2 % 10);

    printf("The check digit is: %d\n", sum_2);

    return 0;
    
}