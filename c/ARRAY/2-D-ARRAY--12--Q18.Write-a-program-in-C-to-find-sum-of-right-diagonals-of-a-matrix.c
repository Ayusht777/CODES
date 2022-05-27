//Q18.Write a program in C to find sum of right diagonals of a matrix
#include<stdio.h>
void main()
{
         printf("PROGRAM TO FIND SUM OF DIAGONALS ELEMNETS");
         printf("\n----------------------------------------------");
         printf("\n| NOTE: THE MATRIX SHOULD BE A SQUARE MATRIX |");
         printf("\n----------------------------------------------");
         int r1,c1;
         printf("\nENTER THE NUMBER OF ROW:");
         scanf("%d",&r1);
         printf("\nENTER THE NUMBER OF COLUMN:");
         scanf("%d",&c1);
         if (r1!=c1){
                  printf("\nTRY AGAIN %d IS NOT EQUAL %d MATRIX",r1,c1);
         }
         else{
         int x[r1][c1];
         int sum=0;

         printf("\n----------------------------------------------");
         printf("\nENTER THE ELEMENTS FOR SQUARE MATRIX OF %d*%d",r1,c1);
         int i,j,k;
         for(i=0;i<r1;i++)
         {
                  for(j=0;j<c1;j++)
                  {
                           printf("\nA[%d][%d]",i,j);
                           scanf("%d",&x[i][j]);
                           if(i==j)
                           {
                                    sum=sum +x[i][j];
                           }
                  }
         }


          printf("\n----------------------------------------------");
          printf("\n THE SUM OF THE MATRIX DIAGONAL IS:%d",sum);







         }



}

