//Q9.Write a program in C to delete an element at desired position from an array.
#include<stdio.h>
int main()
{
         int n;
         printf("ENTER ARRAY SIZE:");
         scanf("%d",&n);
         int x[n];
         int i;
         for(i=0;i<n;i++){


                  printf("\nELEMENT NO %d:",i+1);
                  scanf("%d",&x[i]);
         }
         int e;
         printf("\nENTER THE INDEXING POSITION :");
         scanf("%d",&e);
         if(e<=n&&e>=0){
         printf("\nTHE VALUE BEFORE DELETING:");
         for(i=0;i<n;i++)
         {
                  printf("\n%d",x[i]);
         }

         for(i=e-1;i<n-1;i++)
         {
              x[i] =x[i+1];
         }
         printf("\nTHE VALUE AFTER DELETING :");
         for(i=0;i<n-1;i++)
         {

             printf("\n%d",x[i]);
         }
         }
         else
         {        printf("\n-------------------------------------------------------------");
                  printf("\nTRY AGIAN");
         }


}
