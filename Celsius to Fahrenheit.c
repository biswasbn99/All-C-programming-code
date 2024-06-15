#include<stdio.h>
main()
{
    int C;
    float F;
    printf("Enter the value of C:");
    scanf("%d",&C);
    F=(float)(((9.0/5.0)*C)+32);
    printf("Fahrenheit Temperature is:%.2f",F);
}
