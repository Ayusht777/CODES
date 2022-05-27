

#include <stdio.h>

int main()
{
    //Initialize array

    int n; // n is use to decide the size of array
    start:

    printf("enter the size of array:");
    scanf("%d", &n);
    int x[n];
    int y[n];

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
    for (int i = n - 1, j = 0; i >= 0; i--, j++)
    {
        y[j] = x[i];
        printf("%d ", y[j]);
    }

    return 0;
}
