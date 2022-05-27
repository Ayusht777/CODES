//Q6-Write-a-program-in-C-to-find-the-factorial-of-a-given-number-using-pointer
/*
Test Data :
Input a number : 5
Expected Output :

The Factorial of 5 is : 120 

*/
#include<stdio.h>
int main()
{
    int x;
    int *y =&x;
    int f=1;
    int *fact =&f;

    printf("Input a number : ");
    scanf("%d",y);
    do
    {

     *fact = ( *fact ) * ( *y )  ;
      *y = *y - 1  ;

    }while(  *y > 0 ) ;
    printf("\nThe Factorial of %d is : %d",*y,*fact);
}