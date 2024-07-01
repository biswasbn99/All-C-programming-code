/*Write a program to compute the real roots of a quadratic equation
        ax^2+bx+c=0
        The roots are given by the equations
        x1= -b+(sqrt(b^2-4ac))/2a
         x2= -b-(sqrt(b^2-4ac))/2a
The program should request for the values of the constants a, b and c and print the values of x, and x2. Use the following rules:
 (a) No solution, if both a and b are zero

(b) There is only one root, if a = 0 (x=-c/b)

(c) There are no real roots, if b²-4 ac is negative

(d) Otherwise, there are two real roots

Test your program with appropriate data so that all logical paths are working as per your design. Incorporate appropriate output messages. */


#include<stdio.h>
#include<math.h>
main()
{
    float a,b,c,x,x1,x2,D,E;
    printf("Input the value of a,b and c:\n ");
    scanf("%f%f%f",&a,&b,&c);

    x=(-c/b);
    D=((b*b)-(4*a*c));
    E=(sqrt(D))/(2*a);
    x1=-b+E;
    x2=-b-E;

    if(a==0&&b==0)
    {
        printf("No Solution");

    }
    else if(a==0)
    {
        printf("%.2f",x);
    }
    else if(D<0)
    {
        printf("There are no real roots");
    }
    else
    {
        printf("x1=%.2f \t x2=%.2f",x1,x2);
    }
}
