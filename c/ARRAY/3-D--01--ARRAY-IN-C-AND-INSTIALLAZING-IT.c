//3D ARRAY IN C AND INSTIALIZING IT
#include<stdio.h>
void main()
{
         int x[2][2][2] = {1,2,3,4,5,6,7,8};
         // [row][column][same array how much times]
         int i,j,k;
         printf("\n--------------------------------");
         printf("\nTHE MATRIX");
         for(i=0;i<2;i++)
         {
                  printf("\n--------------------------------");
                   printf("\n");
                  for(j=0;j<2;j++)
                  {
                           for(k=0;k<2;k++)
                           {
                                    printf("\t%d",x[i][j][k]);
                           }
                           printf("\n");
                  }
         }

}
