
#include<stdio.h>
int r, c,n;
void input(int a[100][100]);
void show(int a[100][100]);
void add(int a[100][100], int b[100][100]);
void M (int a[100][100], int b[100][100]);

void input (int a[100][100])
{
    for (r=0; r<n; r++)
    {
        for (c=0; c<n; c++)
        {
            printf("[%d][%d]: ",r,c);
            scanf("%d", &a[r][c]);
        }
    }
}

void show(int a[100][100])
{
    for (r=0; r<n; r++)
    {
        for (c=0; c<n; c++)
        {
            printf("%d\t",a[r][c]);
        }

        printf("\n");
    }
}

void m(int a[100][100], int b[100][100])
{
    int k, s=0, ab[100][100];
    for (r=0; r<n; r++)
    {
        for (c=0; c<n; c++)
        {
            for (k=0; k<n; k++)
            {
                s+=a[r][k]*b[k][c];
            }
            ab[r][c]=s;
            s=0;
        }
    }
    show(ab);
}

void add(int a[100][100],int b[100][100])
{
    int ab[100][100];

    for (r=0; r<n; r++)
    {
        for (c=0; c<n; c++)
        {
            ab[r][c]= a[r][c]+b[r][c];
        }
    }
    show(ab);
}



void main()
{
    printf("How many elements?\n");
    scanf("%d",&n);
    int x[100][100], y[100][100];

    printf("Input the elements of matrix x:\n");
    input(x);
     printf("The elements of matrix x are:\n");
     show(x);

    printf("Input the elements of matrix y:\n");
    input(y);
    printf("The elements of matrix y are :\n");
     show(y);


    printf("multiplication of matrix x and y:\n");
    m(x,y);
    printf("Addition of matrix x and y:\n");
    add(x,y);


}
