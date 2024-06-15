#include<stdio.h>
main()
{
    int a,b,c;
    printf("Input the value of a,b and c:\n");
    scanf("%f%f%f",&a,&b,&c);

    if(a<b && a<c)
    {
        printf("a is the smallest number");
    }
    else if(b<a && b<c)
    {
        printf("b is the smallest number");
    }
    else
    {
        printf("c is the smallest number");
    }

    //(a<b && a<c)?(printf("a is the smallest")):((b<a && b<c)?(printf("b is the smallest ")):(printf("c is the smallest")));

}
