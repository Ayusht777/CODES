// program to input value in array by user and finding in it

#include<stdio.h>
int main()
{
    int i,e,n;
    int x[n],z=0;
    printf("ENTER THE SIZE OF ARRAY:");
    scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            printf("\nENTER THE ELEMENTS:");
            scanf("%d",&x[i]);

        }
    printf("\nFIND:");
    scanf("%d",&e);
    for(i=0;i<n;i++)
    {
        if(e==x[i])
        {
            printf("\nTHE SREACH NUMBER IS %d AT THIS INDEX %d",e,i+1);
            z =1;
        }
    }
    if (z==0)
    {
        printf("\nNOT FOUND");
    }
    return 0;

}
// working find but not in this compiler
