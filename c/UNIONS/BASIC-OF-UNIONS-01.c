//BASIC-OF-UNIONS-01
//A union is a user-defined type similar to structs in C except for one key difference.

//Structures allocate enough space to store all their members, whereas unions can only hold one member value at a time.
/*
union name
{
  member 1;
  member 2;
};
*/
#include<stdio.h>
union laptop
{
    char spec[100];
    int price;
};
int main()
{
  union laptop l;
  
  printf("%d",sizeof(l));
  //unions the size of the union depend on largest element of the element 
  printf("\nENTER THE STRING:");
  scanf(" %99[^\n]",&l.spec);
  printf("\nENTER THE NUMBER:");
  scanf("%d",&l.price);
  printf("\n%s,%d",l.spec,l.price);
  // union only store one data at a time we cannot store multiple data at a time


}
