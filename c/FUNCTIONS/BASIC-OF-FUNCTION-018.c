//<math.h>
//acos()
// inverse of cos
//The acos() function returns the arc cosine (inverse cosine) of a number in radians.
// acos(x) = cos-1(x).

#include<math.h>
#include<stdio.h>
int main()
{
    double PI = 3.1415926;
    double x ;//it will perciesly store the value of  value of cosine in radinas
    // double =%lf
    float y;
    printf("\nENTER A NUMBER TO FIND INVERSE OF COS:");
    scanf("%f",&y);
    if(y<-1&&y>1)
   { // cosine [-1<x>1]
    x =acos(y);
    printf("\nTHE cos(%.2f) = %lf in radians",y,x);
    // in degree
    x = x*180/PI;
    printf("\nTHE cos(%.2f) = %lf in degrees",y,x);
   }
   else 
   printf("\nVALUE SHOULD BE BETWEEN -1 TO +1");

    

}