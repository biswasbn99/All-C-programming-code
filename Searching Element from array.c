#include<stdio.h>
main()
{
    int A[20],p,n,s,c=0;
    printf("How many elements:\n");
    scanf("%d",&n);

    printf("Input the elements:\n");
    for(p=0;p<n;p++)
    {
        printf("A[%d]:", p);
        scanf("%d",&A[p]);
    }
    printf("The elements are:\n");
    for(p=0;p<n;p++)
    {
        printf("%d\t",A[p]);
    }
    printf("\nWhat are you searching:\n");
    scanf("%d",&s);
    for(p=0;p<n;p++)
    {
        if(A[p]==s)
        {
            c++;
            printf("%d located in %d position\n",s,p+1);
        }
    }
    if(c==0)
    {
        printf("\nElement not found\n");
    }
    else
    {
        printf("\n%d available %d times",s,c);
    }
}
