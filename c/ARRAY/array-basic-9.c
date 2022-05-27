#include <stdio.h>

int main()
{
    //Initialize array
    int n;
    int x[n];
    printf("enter the size of array:");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {

        printf("enter elements : \n");
        scanf("%d ",&x[i]);
    }

    printf("\n");
    printf("Array in reverse order: \n");
    //Loop through the array in reverse order
    for (int i = n-1; i >= 0; i--) {
        printf("%d ", x[i]);
    }
    return 0;
}
