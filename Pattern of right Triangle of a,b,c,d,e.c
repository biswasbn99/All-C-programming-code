#include<stdio.h>
main()
{
    int r,c,n=5;
    //printf("Enter n=");
    //scanf("%d",&n);


    for(r=1;r<=n;r++)
    {
        for(c=1;c<=r;c++)
        {
            printf("%c",r+96);
        }

    printf("\n");
    }
}
