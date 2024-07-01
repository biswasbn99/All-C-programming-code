#include<stdio.h>
main()
{
    int A[20][20],n,r,c,sum,up_sum,lw_sum;
    printf("How many elements?\n");
    scanf("%d",&n);

    printf("\nInput the elements of Matrix A:\n");
    for(r=0;r<n;r++)
    {
        for(c=0;c<n;c++)
        {
            printf("A[%d][%d] :",r,c);
            scanf("%d",&A[r][c]);
        }
    }
    printf("\The elements of Matrix A are:\n");

        for(r=0;r<n;r++)
    {
        for(c=0;c<n;c++)
        {
            printf("%d\t",A[r][c]);

        }
        printf("\n");
    }
    printf("\n the diagonal elements of matrix A are:\n");
    sum=0;
    for(r=0;r<n;r++)
    {
        for(c=0;c<n;c++)
        {
            if(r==c)
            {
                printf("%d\t",A[r][c]);
                sum=sum+A[r][c];            }
        }
    }
    printf("\nSum of the diagonal elements are:%d",sum);

printf("\n the Upper triangular elements of matrix A are:\n");
    up_sum=0;
    for(r=0;r<n;r++)
    {
        for(c=0;c<n;c++)
        {
            if(r<c)
            {
                printf("%d\t",A[r][c]);
                up_sum=up_sum+A[r][c];
                 }
        }
    }
    printf("\nSum of the diagonal elements are:%d",up_sum);


}
