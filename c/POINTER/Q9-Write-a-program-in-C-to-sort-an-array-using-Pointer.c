//Q9-Write-a-program-in-C-to-sort-an-array-using-Pointer
/*
Test Data :
testdata
Expected Output :
Test Data :
Input the number of elements to store in the array : 5
Input 5 number of elements in the array :
element - 1 : 25
element - 2 : 45
element - 3 : 89
element - 4 : 15
element - 5 : 82
Expected Output :

                                                                                           
 The elements in the array after sorting :                                                                    
 element - 1 : 15                                                                                             
 element - 2 : 25                                                                                             
 element - 3 : 45                                                                                             
 element - 4 : 82                                                                                             
 element - 5 : 89  

*/
#include<stdio.h>
int main()
{
    int n;
    printf("Input the number of elements to store in the array :");
    scanf("%d",&n);
    
    int x[n],z[n];
    int *y =x;
    int tmp;
    printf("\nInput %d number of elements in the array :",n);
    for(int i=0;i<n;i++)
    {
        printf("\nelement - %d :",i);
        scanf("%d",y+i);
        
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if (*(y+i)>*(y+j))
            { 
                tmp =*(y+i);
                *(y+i) =*(y+j);
                *(y+j) =tmp;


            }
        }
        
    }
    for(int i=0;i<n;i++)
    {
        printf("\nelement - %d :%d",i,*(y+i));
       
        
    }
    




}