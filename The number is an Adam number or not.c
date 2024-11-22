#include <stdio.h>

int rev(int n);
void Adam(int n);

int rev(int n)
{
    int s=0,R;
    while(n!=0)
    {
        R=n%10;
        s=(s*10)+R;
        n/=10;
    }

    return s;
}

void Adam(int n)
{
    int sqr,p,k,m;
    sqr=n*n;
    p=rev(sqr);
    k=rev(n);
    m=k*k;
    if(m==p)
    {
        printf("The number is an Adam number");
    }
    else
    {
        printf("The number is not an Adam number");
    }
}
 main()
{
    int n;
    printf("Input the number: ");
    scanf("%d",&n);
    Adam(n);

}
