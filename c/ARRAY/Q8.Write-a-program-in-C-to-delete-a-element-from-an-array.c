//Q8.Write a program in C to delete a element from an array
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
         int k,j=0;
         printf("\nENTER THE ELEMENT :");
         scanf("%d",&k);
         int q=n-1;
         int z[q];
         for(i=0;i<n;i++)
         {
                  if(x[i]!=k)
                  {
                    z[j]=x[i];
                    j++;
                  }
         }
         for(i=0;i<q;i++)
         {
                  printf("\nTHE VALUES ARE :%d",z[i]);
         }
}
