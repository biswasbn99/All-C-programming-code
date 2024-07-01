#include<stdio.h>
#define A 4.00
#define B 3.00
#define C 2.00
#define D 1.00
#define F 0.00
#define sc 3.00
#define tc 12.00
void main()
{
    float s1,s2,s3,s4,sg1,sg2,sg3,sg4,SGPA,p=5.0;
    printf("Input the marks:\n");
    scanf("%f%f%f%f",&s1,&s2,&s3,&s4);
    sg1=(s1>=0&&s1<=100)?((s1>=90)?(A):((s1>80)?(B):((s1>=70)?(C):((s1>=60)?(D):(F))))):(p);
    sg2=(s2>=0&&s2<=100)?((s2>=90)?(A):((s2>80)?(B):((s2>=70)?(C):((s2>=60)?(D):(F))))):(p);
    sg3=(s3>=0&&s3<=100)?((s3>=90)?(A):((s3>80)?(B):((s3>=70)?(C):((s3>=60)?(D):(F))))):(p);
    sg4=(s4>=0&&s4<=100)?((s4>=90)?(A):((s4>80)?(B):((s4>=70)?(C):((s4>=60)?(D):(F))))):(p);

 (sg1!=p && sg2!=p && sg3!=p && sg4!=p)?(printf("My SGPA is:%.2f",(((sg1+sg2+sg3+sg4)*3)/12))):(printf("Invalid Marks"));


}

