//Q21.Write a program in C to print or display the lower triangular of a given matrix
#include<stdio.h>
void main(){
         int n;
         printf("PROGRAM TO PRINT LOWER TRIANGLE OF A SQUARE MATRIX");
         printf("\n---------------------------------------------------");
         printf("\nENTER THE SIZE OF SQUARE MATRIX:");
         scanf("%d",&n);
         if(n<1)
         {
                  printf("\nTHE SIZE OF MATRIX IS NOT A SQUARE");
         }

         else{
         int x[n][n];
         int i,j;
         printf("\n---------------------------------------------------");
         printf("\nENTER THE ELEMENTS FOR MATRIX");
         for(i=0;i<n;i++)
         {
                  for(j=0;j<n;j++)
                  {
                           printf("\nA[%d][%d]:",i,j);
                           scanf("%d",&x[i][j]);
                  }
         }
         printf("\n---------------------------------------------------");
         printf("\nMATRIX WITH LOWER TRIANGLE\n");
         for(i=0;i<n;i++)
         {
                  for(j=0;j<n;j++)
                  {
                           if(i<=j)
                                    printf("\t%d",x[i][j]);
                           else
                                    printf("\t0");
                  }
                  printf("\n");
         }

         }







}
