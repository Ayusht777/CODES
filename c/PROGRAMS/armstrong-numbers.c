#include<stdio.h>
int main()
{ int x,s =0,n,t;
   printf("ENTER NUMBER:");
   scanf("%d",&n);
   x =n;
   while(n>0)
   {
       t = n%10;
       s = s + (t*t*t);
       n = n/10;


   }
   if (x==s)
    printf("the number is armstrong");
   else
    printf("not armstrong number");


}
