// 2-D ARRAY
// PRINTING A 2-D ARRAY USING FOR LOOP

#include<stdio.h>
int main()
{
         int x[2][2]={1,2,3,4};
         int i,j;
         for(i=0;i<2;i++)
         {
                  for(j=0;j<2;j++)
                  {
                           printf("\nx [%d][%d] = %d",i,j,x[i][j]);
                  }
         }
}
