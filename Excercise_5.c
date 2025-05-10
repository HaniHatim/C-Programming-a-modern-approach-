#include <stdio.h>

int main(void)
{
    float income, tax;

    printf("Please enter your income: ");
    scanf("%f", &income);

    if (income > 0 && income < 750.00f)
    {
        tax = income * 0.01;
    }
    
    else if (income >= 750.00f && income < 2250.00f)
    {
        tax = 7.50 + 0.02 * (income - 750);
    }

    else if (income >= 2250.00f && income < 3750.00f)
    {
        tax = 37.50 + 0.03 * (income - 2250);
    }

    else if (income >= 3750.00f && income < 5250.00f )
    {
        tax = 82.50 + 0.04 * (income - 3750);
    }

    else if (income >= 5250.00f && income < 7000.00f)
    {
        tax = 142.50 + 0.05 * (income - 5250);
    }

    else if (income >= 7000.00f)
    {
        tax = 230.00 + 0.06 * (income-7000);
    }
    else if (income <= 0.00)
    {
    printf("Inncorect value entred\n");
    }

    printf("Your tax amount is %.2f$\n", tax);

    return 0;
   
}
