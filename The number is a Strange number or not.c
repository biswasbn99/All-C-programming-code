#include<stdio.h>

int prime(int n);
void strange(int n);

int prime(int n)
{
    int i;
    if (n <= 1)
    {
        return 0;
    }
    for(i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void strange(int n)
{
    if(n == 2 || n == 3 || n == 5 || n == 7)
    {
        printf("%d is a strange number\n", n);
        return 1;
    }
    if((n >= 10 && n <= 99) && (n == 23 || n == 53 || n == 73))
    {
        if(prime(n))
        {
            printf("%d is a strange number\n", n);
        }
        else
        {
            printf("%d is not a strange number\n", n);
        }
        return 1;
    }
    if(n == 373)
    {
        if(prime(n))
        {
            printf("%d is a strange number\n", n);
        }
        else
        {
            printf("%d is not a strange number\n", n);
        }
        return 1;
    }
    printf("%d is not a strange number\n", n);
}

int main()
{
    int n;
    printf("Input the number: ");
    scanf("%d", &n);

    strange(n);

    return 0;
}
