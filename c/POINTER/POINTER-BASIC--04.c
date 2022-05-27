//POINTER BASIC -04
#include<stdio.h>
int main()
{
   //Working of Pointers
   int *p,c;
   c=4;
   printf("THE ADDRESS OF C =%p",&c);
   printf("\nTHE CONETENT ON C =%d",c);
   p =&c;
   printf("\nTHE ADDRESS OF C =%p",p);
   printf("\nTHE CONETENT ON C =%d",*p);
   c= 145;
   printf("\nTHE ADDRESS OF C =%p",p);
   printf("\nTHE CONETENT ON C =%d",*p);
   *p = 451;
   printf("\nTHE ADDRESS OF C =%p",p);
   printf("\nTHE CONETENT ON C =%d",*p);



}
