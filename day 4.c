1) Write a program to swap two numbers without using a third variable. 


input:-
#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
output:- 
Enter value of a: 10
Enter value of b: 20
Before swapping: a = 10, b = 20
After swapping: a = 20, b = 10

2) Write a program to find and display the sum of the first n natural numbers.

input:- 
#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("Sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}

output:-
Enter the value of n: 10
Sum of first 10 natural numbers = 55
