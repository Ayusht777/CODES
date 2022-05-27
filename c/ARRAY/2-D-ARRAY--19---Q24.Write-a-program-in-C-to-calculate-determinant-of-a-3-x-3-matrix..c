//Q24.Write a program in C to calculate determinant of a 3 x 3 matrix.

#include<stdio.h>
void main()
{
         int x[3][3];
         printf("\nPROGRAM TO CALCULATE DERTMINANT OF 3*3 MATRIX");
         printf("\n----------------------------------------------");
         int i,j;
         for(i=0;i<3;i++)
         {
                  for(j=0;j<3;j++)
                  {
                           printf("\nA[%d][%d]:",i,j);
                           scanf("%d",&x[i][j]);
                  }
         }
         printf("\n----------------------------------------------");
         printf("\nTHE MATRIX\n");
          for(i=0;i<3;i++)
         {
                  for(j=0;j<3;j++)
                  {
                           printf("\t%d",x[i][j]);

                  }
                  printf("\n");
         }
         printf("\n----------------------------------------------");
         int d;
         d =x[0][0]*(x[1][1]*x[2][2]-x[2][1]*x[1][2])-x[0][1]*(x[1][0]*x[2][2]-x[2][0]*x[1][2])+x[0][2]*(x[1][0]*x[2][1]-x[2][0]*x[1][1]);
         printf("\nTHE DETERMINANT IS :%d",d);

}
