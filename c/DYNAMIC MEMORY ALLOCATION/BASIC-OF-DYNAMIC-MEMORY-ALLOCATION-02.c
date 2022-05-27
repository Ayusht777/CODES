//BASIC-OF-DYNAMIC-MEMORY-ALLOCATION-02
#include<stdio.h>
#include<stdlib.h>
int main()
{
    // m=calloc()
    /*
        “calloc” or “contiguous allocation” method in C is used to dynamically allocate 
        the specified number of blocks of memory of the specified type.
         it is very much similar to malloc() but has two different points and these are:
        It initializes each block with a default value ‘0’.
        It has two parameters or arguments as compare to malloc().
    */
    //syntax --> ptr = (cast-data-type*) calloc(n,sizeof(data_type));

    int *x;
    int i ,n;
    // i = loop n =size of array
    printf("ENTER THE SIZE OF ARRAY:");
    scanf("%d",&n);
    if(n<=0)
    {printf("\nTRY AGAIN");}
    else{
    
    x = (int*)calloc(n,sizeof(int));//sizeof(int) = 4
    printf("\nTHE SIZE OF ARRAY IS %d",n);
    // checking if memory is created or not 
    if(x == NULL)
    {
        printf("\nMEMORY IS NOT CREATED");
    }
    else
    {
        printf("\nENTER ELEMENTS IN ARRAY");
        for(i=0;i<n;i++)
        {
            printf("\nELEMENT %d:",i+1);
            scanf("%d",(x+i));
        }
        printf("\nTHE ELEMENTS ARE :");
        for(i=0;i<n;i++)
        {
            printf("\nELEMENT %d : %d",i+1,*(x+i));
          
        }





    }
    }



}