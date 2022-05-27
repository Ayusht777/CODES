//SCANING VALUE AND SIZE OF ARRAY &PRINTING A 2-D ARRAY USING FOR LOOP
// or
// Q12.Write a program in C for a 2D array of size 3x3 and print the matrix
#include<stdio.h>
int main()
{        int n,m;
         printf("ENTER THE NUMBER OF ROWS :");
         scanf("%d",&n);
         printf("\nENTER THE NUMBER OF COLUMNS:");
         scanf("%d",&m);
         printf("\n\nTHE SIZE OF MATRIX IS %d*%d",n,m);
         printf("\n-----------------------------------");
         if (n>=0||m>=0){

         int x[n][m];
         int i,j;
         for(i=0;i<n;i++)
         {

             for(j=0;j<m;j++)
              {
                printf("\nENTER THE ELMEMNT NO A[%d][%d]:",i,j);
                scanf("%d",&x[i][j]);
              }
         }
         printf("\n-------------------------------------------------");
         printf("\nTHE MATRIX");
         for(i=0;i<n;i++)
         {
                  printf("\n");
                  {
                           for(j=0;j<m;j++)
                           {
                                    printf("\t%d",x[i][j]);
                           }
                           printf("\n");
                  }
         }
         }
         else
                  printf("\n TRY AGAIN");

}
