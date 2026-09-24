1) Write a program to input a year and check whether it is a leap year or not using conditional statements.

input: 
#include <stdio.h>

int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 400 == 0)
    {
        printf("%d is a leap year.", year);
    }
    else if (year % 100 == 0)
    {
        printf("%d is not a leap year.", year);
    }
    else if (year % 4 == 0)
    {
        printf("%d is a leap year.", year);
    }
    else
    {
        printf("%d is not a leap year.", year);
    }

    return 0;
}

output:
Enter a year: 2016
2016 is a leap year.

2) Write a program to input a character and check whether it is a vowel or consonant using if–else.

input:
#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("%c is a vowel.", ch);
    }
    else
    {
        printf("%c is a consonant.", ch);
    }

    return 0;
}

output:
Enter a character: a
a is a vowel.
