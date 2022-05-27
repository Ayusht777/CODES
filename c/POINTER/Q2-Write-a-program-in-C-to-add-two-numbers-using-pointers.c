//Q2-Write-a-program-in-C-to-add-two-numbers-using-pointers
/*Test Data :
Input the first number : 5
Input the second number : 6
Expected Output :

The sum of the entered numbers is : 11 
*/
#include<stdio.h>
int main()
{
    int a,b;
    int *x,*y;
    x =&a;
    y=&b;
    printf("\nENTER FIRST NUMBER:");
    scanf("%d",x);
    printf("\nENTER SECOND NUMBER:");
    scanf("%d",y);
    
    printf("\nTHE SUM OF NUMBER %d",(*x+*y));

}