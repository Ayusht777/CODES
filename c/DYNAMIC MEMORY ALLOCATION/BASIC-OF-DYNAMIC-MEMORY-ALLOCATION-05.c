//dynamically allocate a 2D array
#include<stdio.h>
#include<stdlib.h>
int main()
{
    // syntax ptr = (int*)malloc(sizeof ptr)
    int r,c;
    
    printf("\nENTER THE SIZE OF ROW:");
    scanf("%d",&r);
    printf("\nENTER THE SIZE OF COLUMNS:");
    scanf("%d",&c);
    int *x[r][c];
    x[r][c] = (int*)malloc(sizeof *x);
    printf("\nENTER THE ELEMENTS IN ARRAY");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++ )
        {
            printf("X[%d][%d]:",i+1,j+1);
            scanf("%d",&x[i][j]);
        }
    }
    printf("\nTHE ELEMENTS OF ARRAY:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++ )
        {
            printf("\t%d",*(*(x+i)+j));//*ptr(* (ptr2+i)+j)
            
        }
        printf("\n");
    }
    free(x[r][c]);
    


    
     
}