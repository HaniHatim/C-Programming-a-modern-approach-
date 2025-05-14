/*
Using the switch statement, write a program that converts a numerical grade into a letter
grade:

Enter numerical grade: 84
Letter grade: B

Use the following grading scale: A = 90–100, B = 80–89, C = 70–79, D = 60–69, F = 0–59.
Print an error message if the grade is larger than 100 or less than 0. Hint: Break the grade
into two digits, then use a switch statement to test the ten’s digit.
*/

#include <stdio.h>

int main(void)
{
    int grade;

    printf("Please enter the student's marks: ");
    scanf("%d", &grade);

    if (grade < 0 || grade > 100)
    {
        printf("Inavlid Number\n");
    }

    grade = grade / 10;

    switch (grade)
    {
        case 10: case 9:
        printf("Student's Grade is: A\n");
        break;

        case 8:
        printf("Student's Grade is: B\n");
        break;

        case 7:
        printf("Student's Grade is: C\n");
        break;

        case 6:
        printf("Student's Grade is: D\n");
        break;

        case 0: case 5:
        printf("Student's Grade is: F\n");
        break;
    }
}