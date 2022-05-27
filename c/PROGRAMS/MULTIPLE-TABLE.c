//REVESE MULTIPLICATION TABLE

#include<stdio.h>
int main()
{
    int n,i=10;
    printf("enter number :");
    scanf("%d",&n);
    for(;i>=1;i--)
    {
        printf("%d * %d =%d\n",n,i,n*i);



    }
}
