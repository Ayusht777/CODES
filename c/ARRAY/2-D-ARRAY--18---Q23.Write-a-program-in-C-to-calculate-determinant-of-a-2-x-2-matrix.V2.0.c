//Q23.Write a program in C to calculate determinant of a 2 x 2 matrix V2.0.
#include<stdio.h>
void main()
{
         int x[2][2];
         printf("\nPROGRAM TO CALCULATE DERTMINANT OF 2*2 MATRIX");
         printf("\n----------------------------------------------");
         int i,j;
         for(i=0;i<2;i++)
         {
                  for(j=0;j<2;j++)
                  {
                           printf("\nA[%d][%d]:",i,j);
                           scanf("%d",&x[i][j]);
                  }
         }
         printf("\n----------------------------------------------");
         printf("\nTHE MATRIX\n");
          for(i=0;i<2;i++)
         {
                  for(j=0;j<2;j++)
                  {
                           printf("\t%d",x[i][j]);

                  }
                  printf("\n");
         }
         printf("\n----------------------------------------------");
         int d=1,b=1;
         //d = (x[0][0]*x[1][1])-(x[1][0]*x[0][1]);
         for(i=0;i<2;i++)
         {
                  for(j=0;j<2;j++)
                  {
                           if(i==j)
                           d=d*x[i][j];
                           else
                                    b=b*x[i][j];
                  }
         }
         int a = d-b;
         printf("\nTHE DETERMINANT IS :%d",a);

}
