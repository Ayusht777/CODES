// 1-D array
// wap to scanf and printf array
#include<stdio.h>

int main()
{
    int n;int x[n];
    printf("THE SIZE OF ARRAY:");
    scanf("%d",&n);

    for(int i =0;i<n;i++)
    {
        printf("\nENTER THE ELEMENTS IN IT:");
        scanf("%d",&x[i]);
    }
    for(int i =0;i<n;i++)
    {
        printf("%d\n",x[i]);
    }
}
//program is working but my compiler not showing it
