//Q5-Write-a-program-in-C-to-convert-decimal-number-to-binary-number-using-the-function.c
/*
Test Data :
Input any decimal number : 65
Expected Output :

 The Binary value is : 1000001 
 
*/
#include<stdio.h>
int d(int );
int main()
{
    int dn,bn;
    printf("\nENTER A DECMINAL NUMBER:");
    scanf("%d",&dn);
    bn = d(dn);
    printf("\nTHE BINARY NUMBER :%d",bn);
}
int d(int x)
{
    int r,b=0,f=1;
    while(x!=0)
    {
        r = x %2;
        b = b +r*f;
        f = f*10;
        x=x/2;
      
    }
      return(b);
}