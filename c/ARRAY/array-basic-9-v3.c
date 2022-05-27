//array swapping without two array
#include<stdio.h>


int main()
{
    int n; // n is use to decide the size of array
    start:

    printf("enter the size of array:");
    scanf("%d",&n);
    int x[n];


    if (n > 0)
    {
        for (int i = 0; i < n; i++)
        {
            printf("enter elements : \n");
            scanf("%d", &x[i]);
        }
    }

    else
        {
         printf("TRY AGAIN\n");
         goto start;

        }
    printf("Array in reverse order: \n");
    //Loop through the array in reverse order
    int temp,l=0,h=n-1;
    while(l<h)
    {
        temp =x[h];
        x[h] =x[l];
        x[l] = temp;
        l++;h--;

    }
    for(int i =0;i<n;i++)
    {
        printf("%d ",x[i]);
    }

}
