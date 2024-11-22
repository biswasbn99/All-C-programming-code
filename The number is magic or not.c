#include <stdio.h>

int sum(int n);


int sum(int n) {
    int s = 0, R;
    while (n != 0) {
        R = n % 10;
        s = s + R;
        n /= 10;
    }
    return s;
}
main()
{


    int n,first, second;;
    printf("Input the number:\n");
    scanf("%d", &n);

    first = sum(n);
    second = sum(first);

    if (second == 1) {
        printf("%d is a magic number", n);
    } else {
        printf("%d is not a magic number", n);
    }
}





