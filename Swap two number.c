#include<stdio.h>
void swap(int a, int b);
void swap(int a, int b)
{
    int t;
    t=a;
    a=b;
    b=t;
    printf("After swapping:\na=%d \tb=%d\n",a,b);
}

main()
{
    int x,y;
    printf("Input the number:");
   scanf("%d%d",&x,&y);
printf("\nBefore swapping:\nx=%d\ty=%d\n",x,y);
    swap(x,y);
    printf("After swapping:\nx=%d\ty=%d",x,y);

}
