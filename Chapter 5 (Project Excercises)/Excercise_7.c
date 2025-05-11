/*

Write a program that finds the largest and smallest of four integers entered by the user:
Enter four integers: 21 43 10 35
Largest: 43
Smallest: 10
Use as few if statements as possible. Hint: Four if statements are sufficient.

*/
#include <stdio.h>

int main(void)
{
    int n1, n2, n3, n4;
    int largest, smallest;

    printf("Please enter four integers: ");
    scanf("%d%d%d%d", &n1, &n2, &n3, &n4);

    largest = n1;
    smallest = n1;

    if (n2 > largest)
    largest = n2;
    
    else if (n2 < smallest)
    smallest = n2;

    if (n3 > largest)
    largest = n3;
    
    else if (n3 < smallest)
    smallest = n3;

    if (n4 > largest)
    largest = n4;

    else if (n4 < smallest)
    smallest = n4;


    printf("The Largest number is: %d\n", largest);
    printf("The smallest number is: %d\n", smallest);

    return 0;

}
