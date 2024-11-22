#include<stdio.h>
main()
{
    int r,c,n;
    printf("Input n=");
    scanf("%d",&n);

    for(r=n;r>=1;r--)
    {
        for(c=1;c<=n-r;c++)
        {
            printf("  ");
        }

        for(c=1;c<=r;c++)
        {
            printf("* ");
        }
    printf("\n");

    }
}
