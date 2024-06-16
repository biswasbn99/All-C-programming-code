#include<stdio.h>
main()
{
    float D,M,Y;
    printf("Input the value of D :\n");
    scanf("%f",&D);


     M=(D/30);
     Y=(D/365);
     printf("The month is:%.2f \n The year is:%.2f",M,Y);
}
