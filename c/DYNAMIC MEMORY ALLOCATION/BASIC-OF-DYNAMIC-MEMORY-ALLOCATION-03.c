//BASIC-OF-DYNAMIC-MEMORY-ALLOCATION-03
#include<stdio.h>
#include<stdlib.h>
int main()
{
 int *x,*y;
 // *x for malloc & *y for calloc 
 int i,n;
 printf("\nENTER THE SIZE OF ARRAY:");
 scanf("%d",&n);
 /*
 free()
 “free” method in C is used to dynamically de-allocate the memory. 
 The memory allocated using functions malloc() and calloc() is not de-allocated on their own. 
 Hence the free() method is used, whenever the dynamic memory allocation takes place. 
 It helps to reduce wastage of memory by freeing it.
 */
 if(n<0)
 {
     printf("\nTRY AGAIN SIZE OF ARRY SHOULD BE GREATER THAN %d",n);

 }
 else{
  if(x==NULL && y==NULL)
  {
      printf("\nMEMORY IS NOT CREATED ");
  }
  else
  {
      // allocating using malloc 
      x = (int*)malloc(n*sizeof(int));
      // allocating using calloc
       y = (int*)calloc(n,sizeof(int));

     printf("\nTHE MEMORY IS CREATED MALLOC");
     free(x);
     printf("\nTHE MEMORY IS FREE FOR x");
     printf("\nTHE MEMORY IS CREATED CALLOC");
     free(y);
     printf("\nTHE MEMORY IS FREE FOR y");


  }

 }
}