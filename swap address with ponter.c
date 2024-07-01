#include<stdio.h>
main()
{
    int *x,y=500,*p;
    printf("The value of y is:%d\n",y);
    printf("The address of y is :%d\n",&y);
    x=&y;
    printf("The value of x is :%d\n",x);
    printf("The pointed value by x from y is:%d\n",*x);
    p=&x;
    printf("The address of x is:%d\n",&x);
    printf("The value of p is:%d\n",p);
    printf("The pointed value by p from x is:%d\n",*p);

}
