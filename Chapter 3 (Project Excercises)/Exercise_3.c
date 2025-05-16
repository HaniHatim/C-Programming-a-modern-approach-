/*
Write a program that breaks down an ISBN entered by the user:

Enter ISBN: 978-0-393-97950-3
GS1 prefix: 978
Group identifier: 0
Publisher code: 393
Item number: 97950
Check digit: 3

*/

#include <stdio.h>

int main(void)
{
    int gsi, ide, code, item, check;

    printf("Please enter the ISBN on the back of your book: ");
    scanf("%d-%d-%d-%d-%d", &gsi, &ide, &code, &item, &check);

    printf("\nGS1 prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d", gsi, ide, code, item, check);
    return 0;
}