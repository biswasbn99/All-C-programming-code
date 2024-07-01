#include<stdio.h>
void swap(int *a,int *b);
void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;

    printf("After swapping:\na=%d\tb=%d",a,b);
}
main()
{
    int x,y;
    printf("Input the number:\n");
    scanf("%d %d",&x ,&y);

    printf("\nBefore swapping:\nx=%d\ty=%d\n",x,y);
    swap(&x,&y);

    printf("\nAfter swapping:\nx=%d \ty=%d\n",x,y);


}
