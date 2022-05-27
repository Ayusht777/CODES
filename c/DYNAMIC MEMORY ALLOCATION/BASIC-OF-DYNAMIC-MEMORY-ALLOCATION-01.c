//BASIC-OF-DYNAMIC-MEMORY-ALLOCATION-01
/*
IT ALLOW TO ALLOCATE MEMORY SIZE ON  RUN TIME 
header file <stdlib.h>
function 
1 malloc()
2 calloc()
3 free()
4 relloc()


*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    // malloc()
    /*
    The “malloc” or “memory allocation” method in C is used to dynamically allocate 
    a single large block of memory with the specified size. 
    It returns a pointer of type void which can be cast into a pointer of any form.*/
    //syntax --> ptr = (cast-data-type*) malloc(n*sizeof(data_type));

    int *x;
    int i ,n;
    // i = loop n =size of array
    printf("ENTER THE SIZE OF ARRAY:");
    scanf("%d",&n);
    if(n<=0)
    {printf("\nTRY AGAIN");}
    else{
    
    x = (int*)malloc(n*sizeof(int));//sizeof(int) = 4
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
