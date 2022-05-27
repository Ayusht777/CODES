//Q27.Write a program in C to accept two matrices and check whether they are equal.
#include<stdio.h>
void main(){
         int r1,r2,c1,c2;
         printf("\nPROGRAM TO ACCEPT TWO MATRICES AND CHECK WHETHER THEY ARE EQUAL");
         printf("\n----------------------------------------------------------------");
         printf("\nENTER SIZE OF ROW FOR FIRST MATRIX:");
         scanf("%d",&r1);
         printf("\nENTER SIZE OF COLUMN FOR FIRST MATRIX:");
         scanf("%d",&c1);
         printf("\nENTER SIZE OF ROW FOR SECOND MATRIX:");
         scanf("%d",&r2);
         printf("\nENTER SIZE OF COLUMN FOR SECOND MATRIX:");
         scanf("%d",&c2);
         int x[r1][c1],y[r2][c2];

         if(r1!=r2||c1!=c2)
         {
                  printf("\nTHE FIRST MATRIX OF %dx%d IS NOT EQUAL TO SECOND MATRIX OF %dx%d",r1,c1,r2,c2);

         }
         else{

                printf("\n----------------------------------------------------------------");
                int i,j;
                printf("\nENTER ELEMENTS FOR FIRTS MATRIX");
                for(i=0;i<r1;i++)
                {
                   for(j=0;j<c1;j++)
                           {
                                    printf("\nA[%d][%d]:",i+1,j+1);
                                    scanf("%d",&x[i][j]);
                           }
                }
                 printf("\n----------------------------------------------------------------");
                 printf("\nENTER ELEMENTS FOR FIRTS MATRIX");
                for(i=0;i<r1;i++)
                {
                   for(j=0;j<c1;j++)
                           {
                                    printf("\nB[%d][%d]:",i+1,j+1);
                                    scanf("%d",&y[i][j]);
                           }
                }
                 printf("\n----------------------------------------------------------------");
                 int z=0;
                 for(i=0;i<r1;i++)
                 {
                          for(j=0;j<c1;j++)
                          {
                                   if(x[i][j]==y[i][j])
                                   {
                                            z++;
                                   }
                          }
                 }
                 if(z==r1*c1)
                 {
                          printf("\nTHE TWO MATRIX ELMENTS AND MATRIX BOTH ARE EQUAL");
                 }
                 else
                  printf("\nTHE TWO MATRIX ELMENTS AND MATRIX BOTH ARE NOT EQUAL");




         }









}
