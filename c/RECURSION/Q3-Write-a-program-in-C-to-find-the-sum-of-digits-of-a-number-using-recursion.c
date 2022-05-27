//Q3-Write-a-program-in-C-to-find-the-sum-of-digits-of-a-number-using-recursion.c
/*
Test Data :
Input any number to find sum of digits: 25
Expected Output:

The Sum of digits of 25 = 7 
 
*/
 #include<stdio.h>
 int sn(int n)
 {
     if(n==0)
     return 0;
    return(n%10 + sn(n/10));
 }
 int main()
 {
   int x;
   printf("\nENTER A NUMBER:");
   scanf("%d",&x);
   printf("\nTHE SUM :%d",sn(x));
 }