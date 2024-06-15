#include<stdio.h>
main()
{
    float inch,cm;
    printf("Input the value of inch:\n");
    scanf("%f",&inch);

    cm=(inch*2.54);

    printf("Centimeter is:%.2f",cm);
}
