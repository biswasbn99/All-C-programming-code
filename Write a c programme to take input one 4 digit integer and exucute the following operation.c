#include<stdio.h>
main()
{
    int x,p,q,r;
   printf("Input the value of x:");
    scanf("%d",&x);

    (x<=9999)?(printf("The number is:%d\n",x)):(printf("The number is Error!!\n"));
    p=(x%1000);
    q=(x%100);
     r=(x%10);
     printf("The number except first digits:%d\n",p);
      printf("The number except first two digits:%d\n",q);
       printf("The number only last digits:%d",r);
}
