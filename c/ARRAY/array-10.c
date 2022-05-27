/**
 * C program to count total number of duplicate elements in an array
 */

#include <stdio.h>



int main()
{
    int n;
    int i, j,c=0;

    /* Input size of array */
    printf("Enter size of the array : ");
    scanf("%d", &n);
    // Declaring new two array after n
    int x[n],y[n];// you also check  the duplicate elements in array by only array

    /* Input elements in array */

    for(i=0; i<n; i++)
    {
        printf("Enter elements in array : ");
        scanf("%d", &x[i]);
        y[i]=x[i];
    }

    /*
     * Find all duplicate elements in array
     */
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            /* If duplicate found then increment count by 1 */
            if(x[i] == y[j])
            {
                c++;

            }

        }
    }
     printf("\nTotal number of duplicate elements found in array = %d", c);



    return 0;
}
