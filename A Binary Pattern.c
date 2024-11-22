#include<stdio.h>
main()
{
    int r,c,n;
    printf("Enter n=");
    scanf("%d",&n);

    for(r=n;r>=1;r--)
    {
        for(c=1;c<=n-r;c++)
        {
            printf("  ");
        }
        for(c=1;c<=(2*r-1);c++)
        {
            printf("%d ",(r+c+1)%2);

        }

    printf("\n");
    }
}
