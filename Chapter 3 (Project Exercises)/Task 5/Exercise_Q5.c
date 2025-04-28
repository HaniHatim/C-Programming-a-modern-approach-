/*
Write a program that asks the user to enter the numbers from 1 to 16 (in any order) and then
displays the numbers in a 4 by 4 arrangement, followed by the sums of the rows, columns,
and diagonals:

Enter the numbers from 1 to 16 in any order:
16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1

16 3 2 13
5 10 11 8
9 6 7 12
4 15 14 1

Row sums: 34 34 34 34
Column sums: 34 34 34 34
Diagonal sums: 34 34

*/

#include <stdio.h>

int main(void)
{
    const int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15, n16;

    int horizontal_sum1, horizontal_sum2, horizontal_sum3, horizontal_sum4;

    int colum_sum1, colum_sum2, colum_sum3, colum_sum4;

    int diagonal_sum1, diagonal_sum2;

    printf("Enter the numbers in any order from 1 to 16: ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15, &n16);


    printf("\nThe Numbers Table:\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n", n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15, n16);

    horizontal_sum1 = n1 + n2 + n3 + n4;
    horizontal_sum2 = n5 + n6 + n7 + n8;
    horizontal_sum3 = n9 + n10 + n11 + n12;
    horizontal_sum4 = n13 + n14 + n15 + n16;

    colum_sum1 = n1 + n5 + n9  + n13;
    colum_sum2 = n2 + n6 + n10 + n14; 
    colum_sum3 = n3 + n7 + n11 + n15;
    colum_sum4 = n4 + n8 + n12 + n16;

    diagonal_sum1 = n1 + n6 + n11 + n16;
    diagonal_sum2 = n4 + n7 + n10 + n13;

    printf("\nHorizontal Sum %d %d %d %d\n", horizontal_sum1, horizontal_sum2, horizontal_sum3, horizontal_sum4);
    printf("Colum Sum: %d %d %d %d\n", colum_sum1, colum_sum2, colum_sum3, colum_sum4);
    printf("Diagonal Sum: %d %d", diagonal_sum1, diagonal_sum2);
    

}