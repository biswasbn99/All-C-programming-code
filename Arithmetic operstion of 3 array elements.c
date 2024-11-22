#include<stdio.h>
main()
{
    int A[50],B[50],c[50],D[50],E[50],n,p;
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
    printf("Input the elements of c:\n");
    for(p=0;p<n;p++)
    {
        printf("c[%d]: ",p);
        scanf("%d",&c[p]);
    }

    for(p=0;p<n;p++)
    {
        D[p]=A[p]+B[p];
    }
    for(p=0;p<n;p++)
    {
        E[p]=D[p]-c[p];
    }
    printf("Arithmetic operstion of 3 array elements are:\n");
    for(p=0;p<n;p++)
    {
        printf("%d\t",E[p]);
    }

}
