#include<stdio.h>
void palindrome(int n);
void palindrome(int n)
{
    int i,rev,R;
    i=n;rev=0;
    for(i=n;i!=0;i/=10)
    {
        R=i%10;
        rev=(rev*10)+R;
    }
    printf("Inverse of the number is=%d\n",rev);
    if(n==rev)
    {
        printf("The number is a palindrome number");
    }
    else
    {
        printf("The number is not a palindrome number");
    }
}
main()
{
    int n;
    printf("Input the number:\n");
    scanf("%d",&n);
    palindrome(n);
}
