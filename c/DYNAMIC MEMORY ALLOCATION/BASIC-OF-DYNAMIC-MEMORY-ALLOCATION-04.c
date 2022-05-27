//BASIC-OF-DYNAMIC-MEMORY-ALLOCATION-04
#include<stdio.h>
#include<stdlib.h>
int main()
{
    /*
    realloc() method

  or “re-allocation” method in C is used to dynamically change 
 the memory allocation of a previously allocated memory.
 In other words, if the memory previously allocated with the help of malloc or calloc is insufficient, 
 realloc can be used to dynamically re-allocate memory. re-allocation of memory maintains 
 the already present value and new blocks will be initialized with the default garbage value.*/
 
 //Syntax: ptr = realloc(ptr, newsize*sizof(datatype));

// where ptr is reallocated with new size 'newSize'.
int *x;
int i,n1,n2;
printf("\nENTER THE SIZE OF ARRAY :");
scanf("%d",&n1);
if(n1<0)
{
    printf("\nTHE TRY AGAIN");
    
}
else
{
    if(x==NULL)
    {
        printf("\nMEMORY IS NOT CREATED");

    }
    else
    {
        // creting using calloc
        x = (int*)calloc(n1,sizeof(int));
        printf("\nTHE SIZE OF ARRAY %d",n1);
        for(i=0;i<n1;i++)
        {
            printf("\nTHE ELEMENT %d:",i+1);
            scanf("%d",x+i);
        }
         for(i=0;i<n1;i++)
        {
            printf("\nTHE ELEMENT %d:%d",i+1,*(x+i));
            
        }
        printf("\nENTER EXPANDED SIZE OF ARRAY:");
        scanf("%d",&n2);
        n2 =n1+n2;
        // so we are gone use relloc 
        x = realloc(x,n2*sizeof(int));
        for(i=n1;i<n2;i++)
        {
           printf("\nELEMENT %d:",i+1);
           scanf("%d",x+i);
        }
        for(i=0;i<n2;i++)
        {
           printf("\nELEMENT %d : %d",i+1,*(x+i));
           
        }
        free(x);

    }


}


}