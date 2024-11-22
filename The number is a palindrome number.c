#include <stdio.h>

int main() {
    int num, i, R, rev = 0;

    printf("Enter the number:\n");
    scanf("%d", &num);

    i = num; // Store the original number

    while (i != 0) { // Loop to reverse the number
        R = i % 10;       // Get the last digit
        rev = (rev * 10) + R; // Construct the reversed number
        i /= 10;          // Remove the last digit
    }

    if (rev == num) { // Check if the number is a palindrome
        printf("The number is a palindrome number\n");
    } else {
        printf("The number is not a palindrome number\n");
    }

    return 0;
}
