//asin()
//The asin() function returns the arc sine (inverse sine) of a number in radians. asin(x) = sin-1(x)
#include<math.h>
#include<stdio.h>
int main()
{
    double PI = 3.1415926;
    double x;
    float z;
    printf("\nENTER A NUMBER FOR SIN():");
    scanf("%f",&z);
    if(z<=1&&z>=-1)
    {
    x = asin(z);
    printf("\nTHE VALUE OF SIN(%.2f):%lf in radians",z,x);
    x =x*180/PI;
     printf("\nTHE VALUE OF SIN(%.2f):%lf in degeers",z,x);
    }
    else
    printf("\n%.2f is not between -1 to +1",z);
}