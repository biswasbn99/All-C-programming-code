#include<stdio.h>
main()
{
    int A[20],B[20],c[20],n,p;
    printf("How many numbers:\n");
    scanf("%d",&n);
    printf("Input the elements of Array A:\n");
    for(p=0;p<n;p++)
    {
        printf("A[%d] :",p);
        scanf("%d",&A[p]);
    }
    printf("\nShow the elemnets of Array A:\n");

   for(p=0;p<n;p++)
    {
printf("%d\t",A[p]);
    }


        printf("\nThe elements of Array B:\n");
    for(p=0;p<n;p++)
    {
        printf("B[%d] :",p);
        scanf("%d",&B[p]);
    }
    printf("\nThe elemnets of Array b:\n");

   for(p=0;p<n;p++)
    {
printf("%d\t",B[p]);
    }
    for(p=0;p<n;p++)
    {
        c[p]=A[p]+B[p];
    }
    printf("\nSum of two elements are:\n");
    for(p=0;p<n;p++)
    {
        printf("%d\t",c[p]);
    }
}
