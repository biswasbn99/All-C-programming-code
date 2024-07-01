#include<stdio.h>
main()
{
    int r,c;
    for(r=1;r<=5;r++)
    {
        for(c=1;c<=r;c++)
        {
            printf("%d",(r+1) %2);
        }
        printf("\n");
    }
}

