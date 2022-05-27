//Q19.Write a program in C to find sum of left diagonals of a matrix
#include<stdio.h>
void main()
{
         printf("PROGRAM TO FIND SUM OF DIAGONALS ELEMNETS");
         printf("\n----------------------------------------------");
         printf("\n| NOTE: THE MATRIX WOULD BE A SQUARE MATRIX |");
         printf("\n----------------------------------------------");
         int r;
         printf("\nENTER THE SIZE OF SQUARE MATRIX:");
         scanf("%d",&r);

         int x[r][r];
         int sum=0;

         printf("\n----------------------------------------------");
         printf("\nENTER THE ELEMENTS FOR SQUARE MATRIX OF %d*%d",r,r);
         int i,j;
         for(i=0;i<r;i++)
         {
                  for(j=0;j<r;j++)
                  {
                           printf("\nA[%d][%d]:",i,j);
                           scanf("%d",&x[i][j]);
                           if(i!=j)
                           {
                                    sum=sum +x[i][j];
                           }
                  }
         }

         printf("\n----------------------------------------------");
         printf("\nTHE MATRIX:\n");
         for(i=0;i<r;i++)
         {
                  for(j=0;j<r;j++)
                  {
                           printf("\t%d",x[i][j]);

                  }
                  printf("\n");
         }





          printf("\n----------------------------------------------");
          printf("\n THE SUM OF THE MATRIX DIAGONAL IS:%d",sum);











}

