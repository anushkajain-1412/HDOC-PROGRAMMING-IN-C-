1) write a programme to add two numbers 

input:- 
#include <stdio.h>

int main() {
    int a, b, sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    sum = a + b;

    printf("Sum = %d", sum);

    return 0;
}

output:-  
Enter two numbers: 2 3 
Sum = 5

=== Code Execution Successful ===

2) Write a program to input two numbers and display their sum, difference, product, and quotient.

input:- 
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Sum=%d, Diff=%d, Product=%d", a + b, a - b, a * b);

    if (b != 0) {
        printf(", Quotient=%d", a / b);
    } else {
        printf(", Quotient=Cannot divide by zero");
    }

    return 0;
}

output:- 
Enter two numbers: 5 7 
Sum=12, Diff=-2, Product=35, Quotient=0

=== Code Execution Successful ===
