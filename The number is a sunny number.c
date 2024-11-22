#include<stdio.h>
#include<math.h>

main()
{
    int n;
    double R;
    printf("Input the number:\n");
    scanf("%d",&n);

    R=(sqrt(n+1));
    if((int)R==R)
    {
        printf("The number is a sunny number");
    }
    else
    {
        printf("The number is not a sunny number");
    }

}
