#include<stdio.h>
#include<math.h>

int count(int n);
void armstrong(int n);

int count(int n)
{
    int d=0,i;
    double nn;

    i=n;
    for(i=n;i!=0;i/=10)
    {
        d++;
    }
    return d;
}
void armstrong(int n)
{
    int R,p,i;
    double nn=0;
    p=count(n);
    i=n;
    for(i=n;i!=0;i/=10)
    {
        R=i%10;
        nn=nn+pow(R,p);
    }
    if(n==nn)
    {
        printf("The number is an Armstrong number");
    }
    else
    {
        printf("The number is not an Armstrong number");
    }
}
main()
{
    int n;
    printf("Input the number:\n");
    scanf("%d",&n);
    armstrong(n);
}
