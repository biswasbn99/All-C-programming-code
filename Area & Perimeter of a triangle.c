#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,s,A,P;
    printf("Input the value of a,b and c:\n");
    scanf("%f%f%f",&a,&b,&c);
    s=((a+b+c)/2);
    A=(sqrt(s*(s-a)*(s-b)*(s-c)));
    P=(a+b+c);
    printf("Area of a triangle:%.2f \n Perimeter of a triangle:.2f",A,P);

}
