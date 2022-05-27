//Q10-Write-a-program-in-C-to-compute-the-sum-of-all-elements-in-an-array-using-pointers.c
/*
Test Data :
Input the number of elements to store in the array (max 10) : 5
Input 5 number of elements in the array :
element - 1 : 2
element - 2 : 3
element - 3 : 4
element - 4 : 5
element - 5 : 6
Expected Output :

 The sum of array is : 20 
*/
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Input the number of elements to store in the array:");
    scanf("%d",&n);
    int x[n];
    int *y =x;
    printf("\nInput %d number of elements in the array",n);
    for(int i;i<n;i++)
    {
        printf("\nelement - %d : ",i+1);
        scanf("%d",y+i);
        sum = sum +*(y+i);
    }
    printf("\nTHE SUM IS %d",sum);




}