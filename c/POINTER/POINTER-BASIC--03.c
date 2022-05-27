//POINTER BASIC -03
#include<stdio.h>
int main()
{
   //Changing Value Pointed by Pointers
   int *p;
   int a;
   a =14;
   p =&a;
   a =10;//here the value also get update without changing the base address
   printf("THE VALUE OF A =%d ,ADDRESS = %p",*p,p);

   // another example
   int *x;
   int s;
   s =4;
   x =&s;
   *x =15;// you can also update the value of s by using *p = means value of p =
   printf("\nTHE VALUE OF S= %d,address =%p",*x,x);


}
