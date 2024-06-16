#include<stdio.h>
main()
{
    char x;
    printf("Enter English Alphabet:\n");
    scanf("%C",&x);

    if(x == 'a' || x== 'A')
    {
        printf("It is vowel");
    }
    else if(x == 'e' ||x == 'E')
    {
        printf("It is vowel");
    }
    else if(x=='i' || x=='I')
    {
        printf("It is vowel");
    }
    else if(x=='o' || x=='O')
    {
        printf("It is vowel");
    }

        else if (x=='u' ||x=='U')
        {
            printf("It is vowel");

        }
         else
        {
            printf("%c is consonant",x);
        }


}
