//Q10-Write-a-C-programming-to-find-out-maximum-and-minimum-of-some-values-using-function-which-will-return-an-array.c
/*
Test Data :
Input 5 values
25
11
35
65
20
Expected Output :

Number of values you want to input: Input 5 values
Minimum value is: 11
Maximum value is: 65  

*/
#include<stdio.h>
int maxmin(int []);

int n; 
int main()
{
    
    printf("\nENTER THE SIZE OF ARRAY:");
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++)
    {
        printf("\nELEMENT %d :",i+1);
        scanf("%d",&x[i]);
    }
    maxmin(x);
    //min(x);
}
int maxmin(int x[n])
{
    int a = x[0];
    int i,m=0;
    for(i=0;i<n;i++)
    {
        if(x[i]>a)
        {
            m = x[i];
        }
    }
    printf("THE MAX = %d",m);
    int z = x[0];
    int s=0;
    for(i=0;i<n;i++)
    {
        if(x[i]<z)
        {
            s = x[i];
        }
    }
    printf("THE MIN = %d",s);

}
