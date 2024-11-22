#include <stdio.h>

// function to check if a number is prime
int isPrime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

// function to check if a number is strange
 isStrange(int n) {
    // check if the number is 2, 3, 5 or 7
    if (n == 2 || n == 3 || n == 5 || n == 7) {
        return 1;
    }
    // check if the number is a 2-digit prime number made up of 2, 3, 5 or 7
    if (n >= 10 && n <= 99 && (n == 23 ||  n == 37 || n == 53 || n == 73)) {
        return isPrime(n);
    }
    // check if the number is the 3-digit prime number 373
    if (n == 373) {
        return 1;
    }
    // otherwise, the number is not strange

}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isStrange(num)) {
        printf("%d is a strange number.\n", num);
    } else {
        printf("%d is not a strange number.\n", num);
    }

    return 0;
}
