//3D ARRAY IN C AND INSTIALIZING IT AND TAKING VALUE FROM USER
#include<stdio.h>
void main()
{
         int x[2][2][2];
         // [row][column][same array how much times]

         int i,j,k,z=0;
         printf("\n--------------------------------");
         for(i=0;i<2;i++)
         {
                  z++;
                  for(j=0;j<2;j++)
                  {
                           for(k=0;k<2;k++)
                           {
                                    printf("\nA[%d][%d] MATRIX NO.%d:",i,j,z);
                                    scanf("%d",&x[i][j][k]);
                           }
                  }
                  printf("\n--------------------------------\n");

         }




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
