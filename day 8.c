1) Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

  INPUT:
#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("It is an uppercase alphabet.");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("It is a lowercase alphabet.");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("It is a digit.");
    }
    else
    {
        printf("It is a special character.");
    }

    return 0;
}

OUTPUT:
Enter a character: 10
It is a digit.

  2) Write a program to input three numbers and find the largest among them using if–else.

INPUT:
#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
    {
        printf("%d is the largest number.", a);
    }
    else if (b >= a && b >= c)
    {
        printf("%d is the largest number.", b);
    }
    else
    {
        printf("%d is the largest number.", c);
    }

    return 0;
}

output:
Enter three numbers: 10 12 15 
15 is the largest number.
