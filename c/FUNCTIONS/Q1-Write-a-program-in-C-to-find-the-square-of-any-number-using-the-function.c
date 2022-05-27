//Q1-Write-a-program-in-C-to-find-the-square-of-any-number-using-the-function.c
#include<stdio.h>
int sq(double x);

int main()
{ double z,x;
    printf("\nENTER A NUMBER FOR SQUARING:");
    scanf("%lf",&z);
    x = sq(z);
    printf("THE NUMBER %.2lf AND SQUARE :%.2lf",z,x);
}
int sq(double x)
{
    
    return(x*x);

}