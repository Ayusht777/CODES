//Q7-Write-a-program-in-C-to-check-armstrong-and-perfect-numbers-using-the-function.c
/*
Test Data :
Input any number: 371
Expected Output :

 The 371 is an Armstrong number.                                                 
 The 371 is not a Perfect number.  

*/
#include<stdio.h>
int arm(int );
int per(int );
int main()
{
    int x;
    printf("\nENTER A NUMBER:");
    scanf("%d",&x);
    arm(x);
    per(x);
}
int arm(int a)
{
    int temp=0,i,arm=0;
    int x =a;
    while(a!=0)
    {
        temp = a%10;
        arm = arm + (temp*temp*temp);
        a = a/10;

    }
    if(arm == x)
    {
        printf("\nTHE NUMBER IS ARMSTRONG");
    }
    else
    printf("\nTHE NUMBER IS NOT ARMSTRONG");
    
}
int per(int a1)
{
        int i=1,sum=0,r;
    for(;i<a1;i++)
    {
        r =a1%10;
        if(r==0)
        {
            sum = sum +i;
        }


    }
    if(a1 == sum)
    {
        printf("\nTHE NUMBER IS PERFECT");
    }
    else
    printf("\nTHE NUMBER IS NOT PERFECT");

}