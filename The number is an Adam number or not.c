#include <stdio.h>

// Function to reverse a number
int rev(int n) {
    int sum = 0, R;
    while (n != 0) {
        R = n % 10;         // Get the last digit
        sum = (sum * 10) + R; // Construct the reversed number
        n /= 10;            // Remove the last digit
    }
    return sum;
}

int main() {
    int num, sqr, r, p, k;

    printf("Enter the number:\n");
    scanf("%d", &num);

    sqr = num * num;         // Square of the number
    r = rev(sqr);            // Reverse of the square
    p = rev(num);            // Reverse of the number
    k = p * p;               // Square of the reversed number

    // Check if the reverse of the square equals the square of the reverse
    if (r == k) {
        printf("The number is an Adam number.\n");
    } else {
        printf("The number is not an Adam number.\n");
    }

    return 0;
}
