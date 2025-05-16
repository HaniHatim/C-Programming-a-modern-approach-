/*
Write a program that formats product information entered by the user. A session with the
program should look like this:
Enter item number: 583
Enter unit price: 13.5
Enter purchase date (mm/dd/yyyy): 10/24/2010

Item        Unit        Purchase
            Price       Date
583         $ 13.50     10/24/2010

*/

#include <stdio.h>

int main(void)
{

    int item, month, day, year;
    float price;

    printf("Please enter the item number: ");
    scanf("%d", &item);

    printf("\nPlease enter the item price: ");
    scanf("%f", &price);

    printf("\nPlease enter the date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("\nItem:\t Unit Price:\t Purchase Date:\t\n %d \t $ %.2f \t  %d\\%d\\%d ", item, price, month, day, year);
    return 0;

}