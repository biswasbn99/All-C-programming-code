#include<stdio.h>
main()
{
    int E,C,A,M,P,Total;
    float Aver,Per;
    printf("Enter the marks:\n");
    scanf("%d%d%d%d%d",&E,&C,&A,&M,&P);
    Total=(E+C+A+M+P);
    Aver=(float)(Total/5);
    Per=(float)((Total/500)*100);
    printf("Total marks:%d\n",Total);
    printf("Average marks:%f\n",Aver);
    printf("Percentage of marks:%f",Per);

}
