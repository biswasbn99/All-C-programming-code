#include<stdio.h>
#include<string.h>
main()
{
    char m[200];
    printf("Input the string:\n");
    gets(m);
    printf("The string is:\n");
    puts(m);
    printf("Reverse of string is:\n");
    puts(strrev(m));
}
