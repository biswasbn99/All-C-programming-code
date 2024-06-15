#include<stdio.h>
main()
{
    int F;
    float C;
    printf("Enter the value of F:");
    scanf("%d",&F);
    C=(float)((5.0/9.0)*(F-32));
    printf("Celsius Temperature is:%.2f",C);
}
