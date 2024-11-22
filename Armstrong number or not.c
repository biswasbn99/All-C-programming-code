#include<stdio.h>
#include<math.h>
main()
{
    int n,i,R,d;
    double nn;

    printf("Enter the number:\n");
    scanf("%d",&n);

    d=0;
    i=n;
    for(i=n;i!=0;i/=10)
    {
        d++;

    }

    nn=0;
    for(i=n;i!=0;i/=10)
    {
        R=i%10;
        nn=nn+pow(R,d);
    }
    if(n==nn)
    {
        printf("armstrong number");
    }
    else
    {
        printf("Not armstrong number");
    }

}
