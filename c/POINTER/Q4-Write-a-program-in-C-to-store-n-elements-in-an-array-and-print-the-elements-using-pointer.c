//Q4-Write-a-program-in-C-to-store-n-elements-in-an-array-and-print-the-elements-using-pointer.
/*Test Data :
Input the number of elements to store in the array :5
Input 5 number of elements in the array :
element - 0 : 5
element - 1 : 7
element - 2 : 2
element - 3 : 9
element - 4 : 8
Expected Output :

 The elements you entered are :                                                                               
 element - 0 : 5                                                                                              
 element - 1 : 7                                                                                              
 element - 2 : 2                                                                                              
 element - 3 : 9                                                                                              
 element - 4 : 8   

*/
#include<stdio.h>
int main()
{
    int n;
    int *nx;
    nx =&n;// pointer 1 
    printf("Input the number of elements to store in the array:");
    scanf("%d",nx);
    int x[*nx];// pointer (pointer1) --> double pointer
    int *y =x;
    printf("\nInput %d number of elements in the array :",*nx);
    int i;
    for(i=0;i<*nx;i++)
    {
        printf("\nelement - %d : ",i);
        scanf("%d",(y+i));

    }
    for(i=0;i<*nx;i++)
    {
        printf("\nelement - %d : %d ",i,*(y+i));
        

    }




}
