//Write a program that computes the volume of a sphere with a 10-meter radius, using the formula v = 4/3πr^3

#include <stdio.h>

int main(void)
{
    float volume, formula;
    float fraction = 4.0f/3.0f;
    float pi = 3.14f;
    float radius = 10.0f;

    formula = (fraction) * pi * (radius*radius*radius);

    printf("%.2f", formula);

    return 0;

}
