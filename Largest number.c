#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Input the value of a,b and c:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("a is the largest number");

    }
    else if(b>a && b>c)
    {
        printf("b is the largest");
    }
    else
    {
        printf("c is the largest ");
    }

   // (a>b && a>c)?(printf("a is the largest")):((b>a && b>c)?(printf("b is the largest")):(printf("c is the largest")));
}
