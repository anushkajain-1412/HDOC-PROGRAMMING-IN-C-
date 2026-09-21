1) Write a program to calculate simple and compound interest for given principal, rate, and time. 

input:-
#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time;
    float simpleInterest, compoundInterest, amount;

    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of interest (per year): ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    // Simple Interest = (P * R * T) / 100
    simpleInterest = (principal * rate * time) / 100;

    // Compound Interest = P * (1 + R/100)^T - P
    amount = principal * pow(1 + rate / 100, time);
    compoundInterest = amount - principal;

    printf("\nSimple Interest   = %.2f", simpleInterest);
    printf("\nCompound Interest = %.2f", compoundInterest);
    printf("\nTotal Amount (Simple)   = %.2f", principal + simpleInterest);
    printf("\nTotal Amount (Compound) = %.2f\n", amount);

    return 0;
}

output:-
Enter Principal amount: 12000
Enter Rate of interest (per year): 4
Enter Time (in years): 2

Simple Interest   = 960.00
Compound Interest = 979.20
Total Amount (Simple)   = 12960.00
Total Amount (Compound) = 12979.20

2) Write a program to input time in seconds and convert it to hours:minutes:seconds format.

input:- 
#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}

output:-
Enter time in seconds: 3600
1:0:0

