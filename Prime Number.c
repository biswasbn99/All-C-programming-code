#include <stdio.h>
#include <math.h>  // Include math.h for sqrt function

int main()  // Correct return type for main
{
    int n, d, f = 0;
    printf("Input the number:\n");
    scanf("%d", &n);

    // Special case handling for numbers less than 2
    if (n < 2) {
        printf("Not prime number\n");
        return 0;
    }

    // Check divisibility only up to the square root of n
    for (d = 2; d <= sqrt(n); d++) {
        if (n % d == 0) {
            f++;
            break;  // No need to check further if a divisor is found
        }
    }

    if (f == 0) {
        printf("Prime number\n");
    } else {
        printf("Not prime number\n");
    }

    return 0;  // Return success
}
