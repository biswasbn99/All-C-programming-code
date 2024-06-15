#include<stdio.h>
main()
{
int x,y,addition,subtraction,multiplication,division;
printf("Input the value of x and y:\n");
scanf("%d%d",&x,&y);
addition=(x+y);
subtraction=(x-y);
multiplication=(x*y);
division=(x/y);

printf("Addition:%d\n",addition);
printf("Subtraction:%d\n",subtraction);
printf("Multiplication:%d\n",multiplication);
printf("Division:%d",division);

}
