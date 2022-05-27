//Q2-Write-a-program-in-C-to-Print-Fibonacci-Series-using-recursion.c
/*
Test Data :
Input number of terms for the Series (< 20) : 10
Expected Output:

 Input number of terms for the Series (< 20) : 10                                
 The Series are :                                                                
 1  1  2  3  5  8  13  21  34  55  

*/
#include<stdio.h>
int f(int n)
{
    if(n == 0){
      return 0;
   }
    else if(n == 1)
    {
      return 1;
   } else 
   {
      return (f(n-1) + f(n-2));
   }
}
int main()
{
    int n;
    printf("\nENTER THE NUMBER:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    printf("\n%d",f(i));
}
