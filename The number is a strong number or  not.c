#include<stdio.h>
void strong(int n);
void strong(int n)

{
    int k,R,i,nn,f;

    k=n;nn=0;
    for(k=n;k!=0;k/=10)
    {
        R=k%10;
        f=1;
        for(i=1;i<=R;i++)
        {
            f=f*i;
        }
        nn=nn+f;
    }
    if(n==nn)
    {
        printf("\nThe number is a strong number:");
    }
    else
    {
        printf("\nThe number is not a strong number:");
    }
}
main()
{
    int n;
    printf("Input the number:\n");
    scanf("%d",&n);
    strong(n);
}
