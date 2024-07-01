#include<stdio.h>
#include<string.h>
main()
{
    char m[200];
    int p,x;
    printf("Input the string:\n");
    gets(m);
    printf("The string is:\n");
    puts(m);
    x=strlen(m);
    for(p=0;p<x;p++)
    {
        if((m[p]>='a' && m[p]<='z')||(m[p]>='A' && m[p]<='Z'))
        {


            if(m[p]>='a' && m[p]<='z')
        {
            m[p]=m[p]-32;
        }
        else
        {
            m[p]=m[p]+32;
        }
        }
}
printf("Again the string is:\n");
puts(m);
}
