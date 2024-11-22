#include<stdio.h>
void automorphic(int n);

void automorphic(int n)
{
    int temp,sqr,c;
    temp=n;
    sqr=temp*temp;
    c=1;
    for(temp=n;temp!=0;temp/=10)
    {
        c=c*10;
}

if(sqr%c==n)
{
    printf("The number is an Automorphic number\n");
}
else
{
    printf("The number is not an automorphic number\n");
}

}
main()
{
    int n;
    printf("Input the number:\n");
    scanf("%d",&n);
    automorphic(n);
}


