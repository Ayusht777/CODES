#include<stdio.h>
// without arg and return value
int pattern()
{
    int i,n,j;
    printf("ENTER THE NUMBER:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

}
int main()
{ int x;
  x=pattern();

}
