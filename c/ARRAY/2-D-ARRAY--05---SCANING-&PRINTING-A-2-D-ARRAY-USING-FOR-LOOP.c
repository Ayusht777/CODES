//SCANING &PRINTING A 2-D ARRAY USING FOR LOOP
#include<stdio.h>
int main()
{
         int x[2][2];
         int i,j;
         for(i=0;i<2;i++)
         {

             for(j=0;j<2;j++)
              {
                printf("\nENTER THE ELMEMNT NO [%d][%d]:",i,j);
                scanf("%d",&x[i][j]);
              }
         }
         printf("\n-------------------------------------------------");
         printf("\nTHE MATRIX");
         for(i=0;i<2;i++)
         {
                  printf("\n");
                  {
                           for(j=0;j<2;j++)
                           {
                                    printf("\t%d",x[i][j]);
                           }
                           printf("\n");
                  }
         }

}
