#include<stdio.h>
void main()
{
    int y;
    printf("Input the year:\n");
    scanf("%d",&y);
    if((y%4==0 && y%100!=0) || (y%400==0))
    {
        printf("%d year is leap year",y);
    }
    else
    {
        printf("%d year is a not a leap year",y);
    }

    //((y%4==0 && y%100!=0) || (y%400==0))?(printf("The year is leap year")):(printf("The year is common year"));
}
