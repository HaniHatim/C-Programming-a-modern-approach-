// 1) Write a program that computes the volume of a sphere with a 10-meter radius, using the formula v = 4/3πr^3
// 2) Modify the program of Programming Project 2 so that it prompts the user to enter the radius of the sphere.

#include <stdio.h>

int main(void)
{
    float radius;
    float volume;
    float fraction = 4.0f/3.0f;
    float pi = 3.14f;

    printf("Please enter the radius in decimal point: ");
    scanf("%f", &radius);

    formula = (fraction) * pi * (radius*radius*radius);

    printf("%.2f", volume);

    return 0;
}
