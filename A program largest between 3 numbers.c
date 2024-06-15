#include<stdio.h>
main()
{
    int a,b,c;
    printf("Input the value of a,b and c:\n");
    scanf("%d%d%d",&a,&b,&c);
    (a>b)?((a>c)?(printf("a is largest")):(printf("c is largest"))):(printf("b is largest"));
}


