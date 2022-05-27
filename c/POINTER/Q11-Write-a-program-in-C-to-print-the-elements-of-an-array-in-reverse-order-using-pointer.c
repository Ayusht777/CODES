//Q11-Write-a-program-in-C-to-print-the-elements-of-an-array-in-reverse-order-using-pointer.c
/*
Test Data :
Input the number of elements to store in the array (max 15) : 5
Input 5 number of elements in the array :
element - 1 : 2
element - 2 : 3
element - 3 : 4
element - 4 : 5
element - 5 : 6
Expected Output :

 The elements of array in reverse order are :                                                                 
 element - 5 : 6                                                                                              
 element - 4 : 5                                                                                              
 element - 3 : 4                                                                                              
 element - 2 : 3                                                                                              
 element - 1 : 2        


*/
#include<stdio.h>
int main()
{
    int n;
    printf("Input the number of elements to store in the array :");
    scanf("%d",&n);
    int x[n];
    int *y =x;
    printf("\nInput %d number of elements in the array",n);
    for(int i=0;i<n;i++)
    {
        printf("\nelement - %d :",i+1);
        scanf("%d",y+i);
    }
    printf("\nThe elements of array in reverse order are :  ");
    for(int i=n-12;i>-1;i--)
    {
        printf("\nelement - %d : %d",i+1,*(y+i));
     
    }
        


}