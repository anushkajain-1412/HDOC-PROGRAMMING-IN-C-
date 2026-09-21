1) Write a program to input an integer and check whether it is even or odd using if–else

input:- 
#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d is Even.\n", num);
    } else {
        printf("%d is Odd.\n", num);
    }

    return 0;
}    

output:- 
Enter an integer: 5
5 is Odd.


2) Write a program to input an integer and check whether it is positive, negative or zero using nested if–else. 

input:- 
#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num >= 0) {
        if (num == 0) {
            printf("The number is Zero.\n");
        } else {
            printf("%d is Positive.\n", num);
        }
    } else {
        printf("%d is Negative.\n", num);
    }

    return 0;
}

output:- 
Enter an integer: 10
10 is Positive.
