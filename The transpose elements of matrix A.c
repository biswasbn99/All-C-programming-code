#include<stdio.h>
main()
{
    int A[20][20],r,c,n;
    printf("How many rows and columns?\n");
    scanf("%d",&n);
    printf("Input the elements of matrix A:\n");
    for(r=0;r<n;r++)
    {
        for(c=0;c<n;c++)
        {
            printf("A[%d][%d] :",r,c);
            scanf("%d",&A[r][c]);

        }
    }
    printf("\n The elements of matrix A are:\n");
    for(r=0;r<n;r++)
    {
        for(c=0;c<n;c++)
        {
            printf("%d\t",A[r][c]);
        }

    printf("\n");
    }
    printf("\n The transpose elements of matrix A are:\n ");
    for(r=0;r<n;r++)
    {
        for(c=0;c<n;c++)
        {
            printf("%d\t",A[c][r]);
        }
        printf("\n");
    }
}
