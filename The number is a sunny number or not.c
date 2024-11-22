#include <stdio.h>
#include <math.h>

void sunny(int n);

void sunny(int n)
{
    double R;
    R = sqrt(n + 1);
    if ((int)R == R)
    {
        printf("The number is a sunny number\n");
    }
    else
    {
        printf("The number is not a sunny number\n");
    }
}

main()
{
    int n;
    printf("Input the number:\n");
    scanf("%d", &n);
    sunny(n);

}

