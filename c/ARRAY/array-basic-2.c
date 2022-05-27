#include<stdio.h>
int main()
{
    int x[4]={1};
    int i;
    for(i=0;i<4;i++)
    {
        printf("%d\n",x[i]);
    }

}
/*
1
0
0
0
*/
//here we assign a[0]=1 and so by default for a[1..3] = 0 by compiler.


