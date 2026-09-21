1) Write a program to convert temperature from Celsius to Fahrenheit. 

input:- 
#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    printf("Temperature in Fahrenheit = %.2f\n", fahrenheit);

    return 0;
}

output:- 
Enter temperature in Celsius: 100.0
Temperature in Fahrenheit = 212.00

2) Write a program to swap two numbers using a third variable.

input:- 
#include <stdio.h>

int main()
{
    int a, b, temp;

    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

output:- 
Enter value of a: 12
Enter value of b: 15
Before swapping: a = 12, b = 15
After swapping: a = 15, b = 12
