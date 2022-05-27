// BASIC-OF-STRUCTURES-06
//structue and pointer
#include<stdio.h>
struct x
{
    char name[100];
    int age;
};
//we can have pointer to a structure. If we have a pointer to structure, members are accessed using arrow ( -> ) operator.
int main()
{
   struct x *p;// we have create a  structure tyep pointer 
   //now create a structure type variable
   struct x p1;
   p=&p1; 
   printf("\nENTER YOUR NAME:");
   gets(p->name);//in pointer we have to use -> rather than .
   printf("\nENTER YOUR AGE:");
   scanf("%d",&p->age); // &p->age ≠ *p->age
   printf("\nNAME:%s,AGE:%d",p->name,p->age);
}