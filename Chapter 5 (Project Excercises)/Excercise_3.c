/*
Modify the broker.c program of Section 5.2 by making both of the following changes:

(a) Ask the user to enter the number of shares and the price per share, instead of the value
of the trade.
(b) Add statements that compute the commission charged by a rival broker ($33 plus 3¢ per
share for fewer than 2000 shares; $33 plus 2¢ per share for 2000 shares or more). Dis-
play the rival’s commission as well as the commission charged by the original broker.

*/

#include <stdio.h>

int main(void)
{
    int shares;
    float value, price, commission, rival_commission;

    printf("Please enter the number of shares you would like to buy: ");
    scanf("%d", &shares);

    printf("Please enter the price per share: ");
    scanf("%f", &price);

    value = shares * price;

    if(value < 2500.00f)
    {
        commission = 30.00f + 0.017f * value;
        rival_commission = 33.00 + 0.02 * shares;
    }
    else if (value < 6250.00f)
    {
        commission = 56.00f + 0.0066f * value;
        rival_commission = 33.00 + 0.03 * shares;
    }
    else if (value < 20000.00f)
    {
        commission = 76.00f + 0.0034 * value;
        rival_commission = 33.00 + 0.03 * shares;
    }
    else if (value < 50000)
    {
        commission = 100.00f + 0.0022f * value;
        rival_commission = 33.00 + 0.03 * shares;
    }
    else if (value < 500000.00f)
    {
        commission = 155.00f + 0.0011f * value;
        rival_commission = 33.00 + 0.03 * shares;
    }
    else
    {
        commission = 255.00f + 0.0009f * value;
        rival_commission = 33.00 + 0.03 * shares;
    }

    if (commission < 39.00f)
    {
        commission = 39.00f;
    }

printf("Commission: $%.2f\nRivial's Commision: $%.2f\n", commission, rival_commission);

return 0;
}
