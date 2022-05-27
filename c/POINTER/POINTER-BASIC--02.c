//POINTER BASIC -02
#include<stdio.h>
int main()
{
    //Pointers (pointer variables) are special variables that are used to store addresses rather than values.
    // declaration of pointer

   int *p;
   int x=45;
   p =&x;
   printf("the value of x %d and value %d ",x,*p);
    //here i just used %d and *p so it will going to print the value on  the pointer not the address of it
    printf("\nTHE ADDRESS %p",p);
   *p =15;
   // here i am updating the value of these pointer not its address
   printf("\nTHE NEW VALUE %d AND THE ADDRESS %p",*p,&p);
   // p==&p both will print address
   // *p == x here


}
