// Arthmetic with array and pointer
#include<stdio.h>
int main()
{
    int y[6] = {4,5,3,7,8,9}; //total elements are 6
    int *x = &y[2]; // here i am assigning base address of x[2] = 3
    printf("\nTHE ADDRESS OF y[2] = %p, CONTENT OF %d ",x,*x); 
    printf("\nTHE ADDRESS OF y[3] = %p, CONTENT OF %d ",x+1,*(x+1));
    printf("\nTHE ADDRESS OF y[1] = %p, CONTENT OF %d ",x-2,*(x-2));
    // OUTPUT 
    /*   THE ADDRESS OF y[2] = 0000006c8b7ff828, CONTENT OF 3 
         THE ADDRESS OF y[3] = 0000006c8b7ff82c, CONTENT OF 7 
         THE ADDRESS OF y[1] = 0000006c8b7ff820, CONTENT OF 4 
    */
    
}
