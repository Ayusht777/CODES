//Q11.Write a program in C to find the second smallest element in an array
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
         int j,z;
         for (i = 0; i < n; i++) // logic of array sorting in descending

        {  for (j = i; j < n; j++)

            {  if (x[i] > x[j])

                {



                    z =  x[i];

                    x[i] = x[j];

                    x[j] = z;
                    }
             }
}

 printf("\nTHE SECOND SMALLEST ELEMENT:%d",x[1]);

}
