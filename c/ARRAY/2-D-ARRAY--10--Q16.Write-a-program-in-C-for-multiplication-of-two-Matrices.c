//Q16.Write a program in C for multiplication of two Matrices
#include<stdio.h>
int main(){
         int n1,m1,n2,m2,x=0;
         printf("PROGRAM TO MULTIPLY TWO MATRIX");
         printf("\n----------------------------------------------------");

         printf("\nENTER THE SIZE OF ROW FOR FIRST MATRIX:");
         scanf("%d",&n1);
         printf("\nENTER THE SIZE OF COLUMNS FOR FIRST MATRIX:");
         scanf("%d",&m1);
         printf("\nENTER THE SIZE OF ROW FOR SECOND MATRIX:");
         scanf("%d",&n2);
         printf("\nENTER THE SIZE OF COLUMNS FOR SECOND MATRIX:");
         scanf("%d",&m2);
         if(m1!=n2)
         {
                  printf("\n----------------------------------------");
                  printf("\nTHE COLUMN OF FIRST MATRIX IS NOT EQUAL TO THE ROW OF SECOND MARTIX\nSO TRY AGIAN");
         }
         else{




                      int x[n1][m1],y[n2][m2],z[n1][m2];
                      printf("\n------------------------------");
                      int i,j;
                      printf("\nENTER THE ELEMNETS FOR FIRST MATRIX");
                      for(i=0;i<n1;i++)
                      {
                               for(j=0;j<m1;j++)
                               {
                                        printf("\nA[%d][%d]:",i,j);
                                        scanf("%d",&x[i][j]);

                               }
                      }
                       printf("\nENTER THE ELEMNETS FOR SECOND MATRIX");
                      for(i=0;i<n2;i++)
                      {
                               for(j=0;j<m2;j++)
                               {
                                        printf("\nB[%d][%d]:",i,j);
                                        scanf("%d",&y[i][j]);

                               }
                      }
                      int sum,k;
                      for(i=0;i<n1;i++)
                      {
                               for(j=0;j<m2;j++)
                               {
                                        sum=0;
                                        for(k=0;k<m1;k++)
                                        {
                                                 sum=sum+x[i][k]*y[k][j];
                                                 z[i][j]=sum;
                                        }
                               }
                      }

                      printf("\n---------------------------------------------");
                      printf("\nSTHE MULTIPLICATION OF TWO MATRIX\n");
                      for(i=0;i<n1;i++)
                      {
                               for(j=0;j<m2;j++){
                                    printf("\t%d",z[i][j]);
                               }
                               printf("\n");
                      }




             }




}











