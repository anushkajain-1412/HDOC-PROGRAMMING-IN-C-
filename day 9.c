1) Write a program to find the roots of a quadratic equation and categorize them.

input:
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, D, root1, root2;

    printf("Enter values of a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    D = b * b - 4 * a * c;

    if (D > 0)
    {
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);

        printf("The roots are real and different.\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }
    else if (D == 0)
    {
        root1 = -b / (2 * a);

        printf("The roots are real and equal.\n");
        printf("Root 1 = Root 2 = %.2f\n", root1);
    }
    else
    {
        printf("The roots are complex and imaginary.\n");
    }

    return 0;
}

output:
Enter values of a, b and c: 1 -5 6 
The roots are real and different.
Root 1 = 3.00
Root 2 = 2.00

2) Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.

input:
#include <stdio.h>

int main()
{
    float percentage;

    printf("Enter your percentage: ");
    scanf("%f", &percentage);

    if (percentage >= 90 && percentage <= 100)
    {
        printf("Grade A");
    }
    else if (percentage >= 80)
    {
        printf("Grade B");
    }
    else if (percentage >= 70)
    {
        printf("Grade C");
    }
    else if (percentage >= 60)
    {
        printf("Grade D");
    }
    else if (percentage >= 0)
    {
        printf("Grade F");
    }
    else
    {
        printf("Invalid percentage");
    }

    return 0;
}

output:
Enter your percentage: 85
Grade B
