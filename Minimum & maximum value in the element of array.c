#include<stdio.h>
main()
{
    int A[20],n,i,j,h,max,min;
    printf("How many elements:\n");
    scanf("%d",&n);

    printf("Input the elements of A:\n");
    for(i=0;i<n;i++)
    {
        printf("A[%d]",i);
        scanf("%d", &A[i]);
    }

    printf("\nThe elements of array A are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",A[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(A[i]>A[j])
            {
                h=A[i];
                A[i]=A[j];
               A[j]=h;
            }
        }
    }
    printf("\nThe sorting elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",A[i]);
    }
    max=A[n-1];
    min=A[0];
    printf("\nThe maximum value is:%d\n",max);
     printf("The minimum value is:%d",min);
}
