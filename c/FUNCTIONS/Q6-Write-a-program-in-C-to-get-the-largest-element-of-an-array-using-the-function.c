//Q6-Write-a-program-in-C-to-get-the-largest-element-of-an-array-using-the-function.c
/*
Test Data :
Input the number of elements to be stored in the array :5
Input 5 elements in the array :
element - 0 : 1
element - 1 : 2
element - 2 : 3
element - 3 : 4
element - 4 : 5
Expected Output :

The largest element in the array is : 5   

*/
#include<stdio.h>
int amax(int []);
int n;
int main(){
   
    printf("ENTER THE SIZE OF ARRAY:");
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++)
    {
        printf("element - %d :",i);
        scanf("%d",&x[i]);

    }
    int z = amax(x);
    printf("\n%d",z);


}
int amax(int x[])
{
    int max=x[0],i,j;
    
        for(j=0;j<n;j++)
        {
            if(x[i]>max)
            {
                max = x[i];
            }
        }
    
    return(max);
}

