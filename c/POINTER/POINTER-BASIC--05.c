//POINTER BASIC -05
//Relationship Between Arrays and Pointers
#include<stdio.h>
int main()
{
      int *p ,x[5];
      p =&x; //here we are assiging base address of x array x[0] at p
      int i;
      for(i=0;i<5;i++)
      {
               printf("\nENTER THE ITEM NO %d IN ARRAY :",i);
               scanf("%d",(p+i));// &p=p means address of p
               // here we are doing ++ on pointer address
               // pointer p , i should be same data type to perform any operation on it
               //p=  1024  i=0
               // p= 1028 i=1
      }
      for(i=0;i<5;i++)
      {
               printf("\nTHE CONTENT ON ARRAY %d AT %d & ADDRESS =%p:",*(p+i),i,p+i);

      }



}


