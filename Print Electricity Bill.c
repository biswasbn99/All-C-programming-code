/*An electricity board charges the following rates for the use of electricity:

For the first 200 units: 80 P per unit

For the next 100 units: 90 P per unit

Beyond 300 units: Rs 1.00 per unit

All users are charged a minimum of Rs. 100 as meter charge. If the total amount is more than Rs. 400, then an additional surcharge of 15% of total amount is charged.

Write a program to print the  electricity bill. */

#include<stdio.h>
#define mc 100
#define sc 0.15
main()
{
    float u,bill,tbill,ftbill;
    printf("Input The units:\n");
    scanf("%f",&u);

    if(u<=200)
    {
        bill=u*0.8;
    }
    else if(u<=300)
    {
        bill=160+(u-200)*0.9;
    }
    else
    {
        bill=250+(u-300)*1;
    }
    tbill=bill+mc;
    ftbill=tbill+(tbill*sc);
    if(tbill>400)
    {
        printf("Electricity bill is:%.2f\n",ftbill);
    }
    else
    {


        ("Electricity bill is:% .2f\n",tbill);

}
}
