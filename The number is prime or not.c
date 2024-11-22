#include<stdio.h>
void prime(int n);
void prime(int n)

{
   int d,f=0;

    for(d=2;d<=(n/2);d++)
    {
        if(n%d==0)
        {
            f++;
            break;
        }
    }

    if(f==0)
       {
           printf("The number is a prime number");
       }
        else
        {
            printf("The number is not a prime number");
        }
}
main()
{
    int n;
    printf("Input the number:\n");
    scanf("%d",&n);
    prime(n);
}
