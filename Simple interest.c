#include<stdio.h>
main()
{
    float p,r,t,Interest;
    printf("Inter the value of p,r and t:\n");
    scanf("%f%f%f",&p,&r,&t);
    Interest=((p*r*t)/100);
    printf("Simple interest is:%.2f",Interest);
}
