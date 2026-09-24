1) Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

input:
#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c)
    {
        printf("The triangle is Equilateral.");
    }
    else if (a == b || b == c || a == c)
    {
        printf("The triangle is Isosceles.");
    }
    else
    {
        printf("The triangle is Scalene.");
    }

    return 0;
}

output:
Enter three sides of the triangle: 10 10 10 
The triangle is Equilateral.

2) Write a program to display the day of the week based on a number (1–7) using switch-case.

input:
#include <stdio.h>

int main()
{
    int day;

    printf("Enter a number (1-7): ");
    scanf("%d", &day);

    switch(day)
    {
        case 1:
            printf("Monday");
            break;

        case 2:
            printf("Tuesday");
            break;

        case 3:
            printf("Wednesday");
            break;

        case 4:
            printf("Thursday");
            break;

        case 5:
            printf("Friday");
            break;

        case 6:
            printf("Saturday");
            break;

        case 7:
            printf("Sunday");
            break;

        default:
            printf("Invalid number! Please enter a number between 1 and 7.");
    }

    return 0;
}

output:
Enter a number (1-7): 5
Friday
