1) reverse a string 

input:- 
#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    // Find length
    while (str[length] != '\0') {
        length++;
    }

    printf("Reversed string: ");

    // Print in reverse order
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}

output:- 
Enter a string: anushka
Reversed string: akhsuna

=== Code Execution Successful ===

2) Check if a string is a palindrome.

input:- 
#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0, palindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);


    while (str[length] != '\0') {
        length++;
    }
    
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            palindrome = 0;
            break;
        }
    }

    if (palindrome == 1)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}

output:- 
Enter a string: naman 
Palindrome

=== Code Execution Successful ===
