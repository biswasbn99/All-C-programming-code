#include<stdio.h>
int fact(int n);
int fact(int n)
{
    int R;
    if(n==0)
    {
        R=1;
    }
        else
        {
          R=n*fact(n-1);
        }
    return R;
    }


main()
{
  int y;
  printf("Input the number:\n");
  scanf("%d",&y);

  printf("The factorial value is :%d",fact(y));
}
