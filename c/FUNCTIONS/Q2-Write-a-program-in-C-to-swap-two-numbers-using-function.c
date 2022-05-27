//Q2-Write-a-program-in-C-to-swap-two-numbers-using-function.c
/*
Test Data :
Input 1st number : 2
Input 2nd number : 4
Expected Output :

Before swapping: n1 = 2, n2 = 4                                                  
After swapping: n1 = 4, n2 = 2 

*/
#include<stdio.h>
int swap(int * ,int * );
int main()
{
    int x ,y;
    printf("\nENTER A NUMBER 1:");
    scanf("%d",&x);
    printf("\nENTER A NUMBER 2:");
    scanf("%d",&y);
     printf("\nTHE N1 =%d,N2=%d",x,y);
    swap(&x,&y);
    printf("\nTHE SWAP N1=%d,N2=%d",x,y);

}
int swap(int *a,int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
    
    
}