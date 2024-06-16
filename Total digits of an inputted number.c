#include<stdio.h>
main()
{
    int num,c=0;
    printf("Input a number:\n");
    scanf("%d",&num);

    start:
        num=num/10;
        c++;

        if(num!=0)
        {
            goto start;
        }
        printf("The number of digits is:%d",c);
}
