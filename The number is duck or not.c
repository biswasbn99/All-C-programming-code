
#include <stdio.h>

void duck(int n);

void duck(int n) {
    int temp, d = 0, R;
    temp = n;
    for(temp=n; temp != 0; temp /= 10) {
        R = temp % 10;
        if(R == 0) {
            d++;
            break;
        }
    }
    if(d == 1) {
        printf("The number is a duck number");
    } else {
        printf("The number is not a duck number");
    }
}

int main() {
    int n;
    printf("Input the number:\n");
    scanf("%d", &n);
    duck(n);
    return 0;
}

