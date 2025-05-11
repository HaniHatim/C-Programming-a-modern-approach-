// Extend the program in Programming Project 1 to handle three-digit numbers.

#include <stdio.h>

int main(void)
{
    int q,w,e,r,t,y;

    printf("Enter a three digit number: ");
    scanf("%d", &q);

    w = q % 10;

    e = q / 10;

    r = e % 10;

    y = e / 10;

    printf("%d%d%d\n", w,r,y);
    return 0;

}
