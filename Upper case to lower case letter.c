#include<stdio.h>
#include<string.h>

main()
{
   char m[200];
   printf("Input the string:\n");
   gets(m);
   printf("The string is :\n");
   puts(m);
   printf("The lower case of string:\n");
  puts(strlwr(m));
}
