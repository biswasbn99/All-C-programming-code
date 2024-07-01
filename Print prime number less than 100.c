#include<stdio.h>
main()
{
    int n,d,f;
    printf("All print is:\n");
    for(n=1;n<=100;n++)
    {
        f=0;
        for(d=2;d<=n/2;d++)
    {
        if(n%d==0)
        {
            f++;
        break;
        }


    }
    if(f==0)
    {
        printf("%d\t",n);
    }

    }

}
