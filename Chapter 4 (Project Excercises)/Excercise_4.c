#include <stdio.h>

int main(void)
{
    int usr_input, modulus1, modulus2, modulus3, modulus4, modulus5;

    printf("Please enter a number between 0 and 32767: ");
    scanf("%d", &usr_input);

    modulus1 = usr_input % 8;

    usr_input = usr_input / 8;
    modulus2 = usr_input % 8;

    usr_input = usr_input / 8;
    modulus3 = usr_input % 8;

    usr_input = usr_input / 8;
    modulus4 = usr_input % 8;

    usr_input = usr_input / 8;
    modulus5 = usr_input % 8;

    printf("%d%d%d%d%d\n", modulus5, modulus4, modulus3, modulus2, modulus1);

    return 0;
}