//Q26.Write a program in C to accept a matrix and determine whether it is a sparse matrix.
#include<stdio.h>
void main()
{
         int r,c;
         printf("\nPROGRAM TO ACCEPT A MATRIX AND DETERMINE WHETHER IT IS A SPARSE MATRIX");
         printf("\n-----------------------------------------------------------------------");
         printf("\nENTER SIZE OF ROW:");
         scanf("%d",&r);
         printf("\nENTER SIZE OF COLUMNS:");
         scanf("%d",&c);
         int x[r][c];

         printf("\n-----------------------------------------------------------------------");
         printf("\nENTER ELEMENTS IN MATRIX OF %d x %d",r,c);
         int i,j;
         int s=0,ns=0;
         for(i=0;i<r;i++)
         {
                  for(j=0;j<c;j++){
                           printf("\nA[%d][%d]",i,j);
                           scanf("%d",&x[i][j]);
                           if(x[i][j]==0)
                           {
                              s++;
                           }
                           else
                                    ns++;
                  }
         }
          printf("\n-----------------------------------------------------------------------");
          printf("\nTHE MATRIX\n");
          for(i=0;i<r;i++)
          {
                   for(j=0;j<c;j++)
                   {
                            printf("\t%d",x[i][j]);
                   }
                   printf("\n");

          }

          if(s>ns)
          {
                   printf("\nTHE MATRIX IS A SPARSE MATRIX");
          }
          else
                  printf("\nTHE MATRIX IS NOT A SPARSE MATRIX");

}
