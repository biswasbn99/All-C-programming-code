#include<stdio.h>
 void main()
{
    float r,A,P;
    printf("Input the value of r:\n");
    scanf("%f",&r);
    A=(3.1416*r*r);
    P=(2*3.1416*r);
    printf("Area of a circle is:%.2f \n Perimeter of a circle is:%.2f",A,P);
}
