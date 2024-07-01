#include<stdio.h>
main()
{
    int m;
    printf("Input the value of m:\n");
    scanf("%d",&m);
    (m>=0 && m<=100)?((m>=90)?((printf)("A grade")):(((m>=87)?((printf)("B+ grade"))
                               :(((m>=84)?((printf)("B grade"))
                               :((m>=80)?((printf)("B- grade"))
                               :((m>=77)?((printf)("C+ grade"))
                               :((m>=74)?((printf)("C grade"))
                               :((m>=70)?((printf)("C- grade"))
                                 :((m>=65)?((printf)("D+ grade"))
                                   :((m>=60)?((printf)("D grade")))
                                     :((printf)("F grade")))))):((Printf)(Invalid Marks!!));

}
