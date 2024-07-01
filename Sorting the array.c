#include<stdio.h>
main()
{
    int A[20],n,i,j,h,f,l,m,s;
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
    printf("\nWhat are you searching:\n");
    scanf("%d",&s);

    f=0;l=n-1;
    m=(f+l)/2;
    while(f<=l)
    {
        if(s>A[m])
        {
            f=m+1;
        }
        else if(s==A[m])
        {
            printf("%d found in %d location",s,m+1);
            break;
        }
        else
        {
            l=m-1;
        }
        m=(f+l)/2;
    }
    if(f>l)
    {
        printf("element not found!!");
    }
}
