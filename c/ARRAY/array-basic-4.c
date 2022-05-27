#include<stdio.h>
int main()
{
    int z[4];
    z[0] = 4;
    z[1] = 7;
    z[5/2] = 3; // 5/2 = 2.5 == 2 --> 3
    z[3];// here z[3] will get assign 0 by default
    int i;
    for(i=0;i<4;i++)
    {
        printf("%d\n",z[i]);
    }

}
/*
4
7
3
0
*/
