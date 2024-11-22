#include<stdio.h>
main()
{
    int A[20][20],r,c,n,sum;
    printf("How many rows and columns?\n");
    scanf("%d",&n);
    printf("Input the elements of A matrix:\n");
    for(r=0;r<n;r++)
    {
        for(c=0;c<n;c++)
        {
            printf("A[%d][%d]",r,c);
            scanf("%d",&A[r][c]);
        }


    }
    printf("\nThe elements of matrix A are:\n ");
    for(r=0;r<n;r++)
    {
        for(c=0;c<n;c++)
        {
            printf("%d\t",A[r][c]);
        }
        printf("\n");
    }

    printf("Diagonal elements are:");
    sum=0;
    for(r=0;r<n;r++)
    {
        for(c=0;c<n;c++)
        {
           if(r==c)
           {

                printf("%d ",A[r][c]);

           }
                sum=sum+A[r][c];

        }
        printf("\nsum of the diagonal elements =%d\n",sum);

    }


}
