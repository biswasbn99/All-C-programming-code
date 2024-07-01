#include<stdio.h>
main()
{
    int A[20][20],r,c,n;
    printf("how many elements?\n");
    scanf("%d",&n);

    printf("\nInput the elements of matrix A are:\n");
    for(r=0;r<n;r++)
    {
        for(c=0;c<n;c++)
        {
            printf("A[%d][%d] :",r,c);
            scanf("%d",&A[r][c]);
        }
    }
    printf("\nThe elements of A are:\n");
    for(r=0;r<n;r++)
    {
        for(c=0;c<n;c++)
        {
            printf("%d\t",A[r][c]);
        }
        printf("\n");
    }
printf("\n The transpose of matrix A:\n");
for(r=0;r<n;r++)
{
    for(c=0;c<n;c++)
    {
        printf("%d\t",A[c][r]);
    }
    printf("\n");

}

}
