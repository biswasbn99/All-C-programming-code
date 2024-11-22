#include<stdio.h>
main()
{
    int A[50],B[50],c[50],n,p;
    printf("How many elements?\n");
    scanf("%d",&n);

    printf("Input the elements of A:\n");
    for(p=0;p<n;p++)
    {
        printf("A[%d]: ",p);
        scanf("%d",&A[p]);
    }
    printf("Input the elements of B:\n");
    for(p=0;p<n;p++)
    {
        printf("B[%d]: ",p);
        scanf("%d",&B[p]);
    }
    for(p=0;p<n;p++)
    {
        c[p]=A[p]+B[p];
    }
    printf("sum of two array elements are:\n");
    for(p=0;p<n;p++)
    {
        printf("%d\t",c[p]);
    }
}
