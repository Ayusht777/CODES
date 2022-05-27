//Q14.Write a program in C for subtraction  of two Matrices of same size
#include<stdio.h>
int main()
{
         int n1,m1,n2,m2;
         printf("MATRXI NO 1.");
         printf("\nENTER THE SIZE OF ROW:");
         scanf("%d",&n1);
         printf("\nENTER THE SIZE OF COLUMNS:");
         scanf("%d",&m1);
         printf("\nMATRXI NO 2.");
         printf("\nENTER THE SIZE OF ROW:");
         scanf("%d",&n2);
         printf("\nENTER THE SIZE OF COLUMNS:");
         scanf("%d",&m2);
         if (n1==n2&&m1==m2)
         {
                  int x[n1][m1];
                  int y[n2][m2];
                  int z[n1][m1];
                  printf("\ENTER ELMENTS FOR FIRTS MATRIX ");
                  int i,j;
                  for(i=0;i<n1;i++)

                  {
                      for(j=0;j<m1;j++)
                      {
                               printf("\n A[%d][%d]:",i,j);
                               scanf("%d",&x[i][j]);
                      }


                  }
                  printf("\nENTER ELEMENTS FOR SECOND MATRIX");

                  for(i=0;i<n2;i++)
                  {
                      for(j=0;j<m2;j++)
                      {
                               printf("\n B[%d][%d]:",i,j);
                               scanf("%d",&y[i][j]);
                               z[i][j] = x[i][j]-y[i][j];
                      }


                  }



                  printf("\n--------------------------------------------");
         printf("\n THE DIFFERANCE OF TWO MATRIX:");
         for(i=0;i<n1;i++)
         {        printf("\n");
         for(j=0;j<m1;j++)
                  {
                           printf("\t%d",z[i][j]);


                  }
                  printf("\n");




         }





}

else
         printf("\nTRY AGIAN");


}
