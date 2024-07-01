#include<stdio.h>
#include<string.h>
main()
{
    char m[200];
    int p,a=0,uc=0,lc=0,d=0,s=0,x;

    printf("Input the string:\n");
    gets(m);
    printf("The string is:\n");
    puts(m);

x=strlen(m);

for(p=0;p<x;p++)
{
    if((m[p]>='a' && m[p]<='z') ||(m[p]>='A' && m[p]<='Z'))
    {
        a++;
        if(m[p]>='a' && m[p]<='z')
        {
            lc++;
        }
            else
            {
                uc++;
            }
        }
        else if(m[p]>='0' && m[p]<='9')
        {
            d++;

        }
        else
        {
            s++;

        }

    }
    printf("There are %d character on your string\n",x);
    printf("Number of Alphabets are:%d\n",a);
     printf("Number of upper case Alphabets are:%d\n",uc);
     printf("Number of lower case Alphabets are:%d\n",lc);
     printf("Number of digits are:%d\n",d);
     printf("Number of special characters are:%d\n",s);


}



