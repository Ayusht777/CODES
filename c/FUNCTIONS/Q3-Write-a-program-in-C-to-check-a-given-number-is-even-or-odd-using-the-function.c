//Q3-Write-a-program-in-C-to-check-a-given-number-is-even-or-odd-using-the-function.c
/*
Test Data :
Input any number : 5
Expected Output :

 The entered number is odd.  
*/
#include<stdio.h>
int eo(int );
int main()
{
    int x;
    printf("\nENTER A NUMBER:");
    scanf("%d",&x);
    eo(x);
}
int eo(int y){

    if(y%2==0)
    {
        printf("\nTHE NUMBER IS EVEN");

    }
    else
    printf("\nTHE NUMBER IS ODD");

}
