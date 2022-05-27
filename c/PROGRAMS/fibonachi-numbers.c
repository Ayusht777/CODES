#include<stdio.h>
int main()
{
    int a=1,b=1,c,n,x=1;
    printf("ENTER THE NUMBER OF TIMES:");
    scanf("%d",&n);
    if (n>=1)
    {
    printf("%d %d ",a,b);
    while(x<n-1)
    {
       c = a + b;
       printf("%d ",c);
       a=b;
       b=c;
       x++;

    }
    }
    else
        printf("try agian");




}
// a =1 b =1
// 1 1 2 3 5
