#include <stdio.h>


void BN(int k[20][20], int n);


void BN(int k[20][20], int n)
{
    int r, c;
    printf("Input the elements of the matrix:\n");

    for (r = 0; r < n; r++) {
        for (c = 0; c < n; c++) {
            printf("k[%d][%d]: ", r, c);
            scanf("%d", &k[r][c]);
        }
    }

    printf("\nThe elements of the matrix are:\n");

    for (r = 0; r < n; r++) {
        for (c = 0; c < n; c++) {
            printf("%d ", k[r][c]);
        }
        printf("\n");
    }
}

int main()
{
    int A[20][20], n, B[20][20];

    printf("How many elements in the matrix?\n");
    scanf("%d", &n);

    BN(A, n);
    BN(B, n);

    return 0;
}
