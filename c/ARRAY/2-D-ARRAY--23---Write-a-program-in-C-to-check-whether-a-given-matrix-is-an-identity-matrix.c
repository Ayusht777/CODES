//Q28.Write a program in C to check whether a given matrix is an identity matrix
#include<stdio.h>
void main(){
         int r;
         printf("\nPROGRAM TO CHECK WHETHER A GIVEN MATRIX IS AN IDENTITY MATRIX");
         printf("\n--------------------------------------------------------------");
         printf("\nENTER SIZE OF SQUARE MATRIX:");
         scanf("%d",&r);

         printf("\n--------------------------------------------------------------");
         int x[r][r];
         int i,j;
         for(i=0;i<r;i++)
         {
                  for(j=0;j<r;j++)
                  {
                           printf("\nA[%d][%d]:",i,j);
                           scanf("%d",&x[i][j]);
                  }

         }
         printf("\n--------------------------------------------------------------");
         printf("\nTHE MATRIX");
          for(i=0;i<r;i++)
         {
                  for(j=0;j<r;j++)
                  {
                           printf("\t%d",x[i][j]);

                  }
                  printf("\n");

         }

         int z=0,d=0,a=0;;
         for(i=0;i<r;i++)
         {
                  for(j=0;j<r;j++)
                  {
                           if(i==j)
                           {        z=x[i][j];
                                    if(x[i][j]==z)
                                    {
                                        d++;
                                    }
                           }
                           else if (x[i][j]==0)
                           {
                                    a++;
                           }

                  }

         }
         if(d==r&&a==r*r-r)
         {
                  printf("\n--------------------------------------------------------------");
                  printf("\nTHE MATRIX IS A IDENTITY MATRIX");
         }
         else
                  printf("\nTHE MATRIX IS NOT A IDENTITY MATRIX");








}
