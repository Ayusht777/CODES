//Q17.Write a program in C to find transpose of a given matrix.
#include<stdio.h>
void main()
{
        printf("PROGRAM TO TRANSPOSE A MATRIX");
        printf("\n-----------------------------");
        int r1,c1;
        printf("\nENTER THE NUMBER OF ROW:");
        scanf("%d",&r1);
        printf("\nENTER THE NUMBER OF COLUMNS:");
        scanf("%d",&c1);
        int r2 =c1;
        int c2=r1;
        int x[r1][c1];
        int y[r2][c2];
        printf("\n-------------------------------");
        int i,j;
        printf("\nENTER THE ELEMENTS");
        for(i=0;i<r1;i++)
        {
                 for(j=0;j<c1;j++){

                  printf("\nA[%d][%d]:",i,j);
                  scanf("%d",&x[i][j]);

                 }
        }
        printf("\n-------------------------------");
        printf("\nTHE MATRIX:\n");
        for(i=0;i<r1;i++)
        {
                 for(j=0;j<c1;j++){

                  printf("\t%d",x[i][j]);


                 }
                 printf("\n");
        }


        for(i=0;i<r2;i++)
        {
                 for(j=0;j<c2;j++){

                  y[i][j]=x[j][i];
                 }
        }
        printf("\n-------------------------------");
        printf("\nTHE TRANSPOSE OF THE MATRIX\n");
        for(i=0;i<r2;i++)
        {
                 for(j=0;j<c2;j++){

                  printf("\t%d",y[i][j]);
                 }
                 printf("\n");
        }

}
