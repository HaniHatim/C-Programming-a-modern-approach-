#include <stdio.H>

int main(void)
{
    float loan;
    float intrest;
    float monthly_payments;
    float added__intrest;

    printf("Please enter your loan amount: ");
    scanf("%f", &loan);

    printf("\nPlease enter your intrest: ");
    scanf("%f", &intrest);

    printf("\nEnter your monthly payment: ");
    scanf("%f", &monthly_payments);

    printf("\nLoan amount: %.2f", loan);
    printf("\nIntrest amount: %.1f", intrest);
    printf("\nMontly Payment: %.2f\n", monthly_payments);

    intrest = intrest / 100.00f;
    intrest = intrest / 12.00f;

    added__intrest = loan * intrest;

    loan = loan - monthly_payments;
    loan = loan + added__intrest;

    printf("\nFirst Installment: %.2f", loan);

    added__intrest = loan * intrest;

    loan = loan - monthly_payments;
    loan = loan + added__intrest;

    printf("\nSecond Installment: %.2f", loan);

    added__intrest = loan * intrest;

    loan = loan - monthly_payments;
    loan = loan + added__intrest;

    printf("\nThird Installment: %.2f", loan);

    return 0;
}