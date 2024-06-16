#include<stdio.h>
main()
{
    int m;
    printf("Input the marks:\n");
    scanf("%d",&m);

    if(m>=0 && m<=100)
    {
        if(m>=90)
        {
            printf("A Grade");
        }
        else if(m>=80)
        {
            printf("B Grade");

        }

        else if(m>=70)
        {
            printf("C Grade");
        }
        else if(m>=60)
        {
            printf("D Grade");
        }
        else
        {
            printf("F Grade");
        }
    }
    else
    {
        printf("Invalid marks!!");
    }
    //(m>=0 && m<=100)?((m>=90)?(printf("A Grade")):((m>=80)?(printf("B Grade")):((m>=70)?(printf("C Grade")):((m>=60)?(printf("D Grade")):(printf("F Grade")))))):(printf("Invaid Marks!!"));

}
