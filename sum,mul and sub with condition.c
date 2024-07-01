/*Write a program to input 3 number ,addition and multiplication of 1st 2 number, subtraction will be value of mul and add. If 3rd num is equal to zero then print the addition of 2 numbers ,otherwise print the subtraction of 2 numbers.*/


#include <stdio.h>

int main()
{
      int n1,n2,n3,sum,mul,sub;


    printf("Enter first number: ");
    scanf("%d", &n1);

    printf("Enter second number: ");
    scanf("%d", &n2);


    printf("Enter third number: ");
    scanf("%d", &n3);


    sum = n1 + n2;


    mul = n1 * n2;
    sub=mul-sum;


    if (n3 == 0)
        {
        printf("Addition:%d \n",sum);
    } else {

        printf("Subtraction:%d\n",sub);
    }



}

