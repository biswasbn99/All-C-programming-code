#include<stdio.h>
main()
{
    int n,R,Rev;
    printf("Input the value of n:\n");
    scanf("%d",&n);

    start:
        R=n%10;
        Rev=(Rev*10)+R;
        n=n/10;
        if(n!=0)
        {
            goto start;

        }
        printf("Inverse number is:%d",Rev);
}
