// multiplication of a array

#include<stdio.h>
int main()
{
    int i,n,s=1;int x[n];
    printf("ENTER THE SIZE OF ARRAY:");
    scanf("%d",&n);
    if(n>0)
    {
        for(int i=0;i<n;i++)
        {
            printf("\nENTER THE ELEMENTS:");
            scanf("%d",&x[i]);
            s = s * x[i];
        }
        printf("\n the sum = %d",s);


    }
    else
        printf("\nthe sum is 0");

}
