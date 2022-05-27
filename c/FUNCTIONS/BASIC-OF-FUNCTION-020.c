//tan()
//function atan() takes a angle argument as a double and returns the value in radians.
#include<math.h>
#include<stdio.h>
int main()
{
    double PI = 3.1415926;
    double x;
    float z;
    printf("\nENTER A NUMBER FOR tan():");
    scanf("%f",&z);
    x = atan(z);
    printf("\nTHE VALUE OF tan(%.2f):%lf in radians",z,x);
    x =x*180/PI;
     printf("\nTHE VALUE OF tan(%.2f):%lf in degeers",z,x);
}