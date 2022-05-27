//Double Pointer (Pointer to Pointer) in C
#include<stdio.h>
int main()
{
    int x = 10;
    int *x1=&x; //single pointer declartion with address of var x
    int **x2=&x1; //** is used for double array and we are storing address of x1
    printf("\nCONTENT OF X =%d",*x1);
    printf("\nCONTENT OF X  =%d",**x2);
   
}