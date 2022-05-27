//Q3-Write-a-program-in-C-to-find-the-maximum-number-between-two-numbers-using-a-pointer
/*
Test Data :
Input the first number : 5
Input the second number : 6
Expected Output :

6 is the maximum number.  

*/
#include<stdio.h>
int main()
{
    int a,b;
    int *x =&a,*y=&b;
    printf("\nENTER FIRST NUMBER:");
    scanf("%d",x);
    printf("\nENTER SECOND NUMBER:");
    scanf("%d",y);
    if (*x>*y)
    {printf("\n%d IS MAXIMUM NUMBER",*x);}
    else if (*x<*y)
    {printf("\n%d IS MAXIMUM NUMBER",*y);}
    else 
    printf("\n%d=%d",*x,*y);


}