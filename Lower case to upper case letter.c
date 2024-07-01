#include<stdio.h>
#include<string.h>
main()
{
char m[200];
printf("Input string:\n");
gets(m);
printf("The string is:\n");
puts(m);
strupr(m);
printf("Upper case of the string:\n");
puts(strupr(m));
}
