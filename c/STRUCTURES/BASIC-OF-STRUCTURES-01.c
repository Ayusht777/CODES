//BASIC-OF-STRUCTURES-01.c
//a struct (or structure) is a collection of variables (can be of different types) under a single name.
/*
Before you can create structure variables, you need to define its data type. To define a struct, the struct keyword is used.
Syntax of struct

struct structureName {
  dataType member1;
  dataType member2;
  ...
};
*/
#include<stdio.h>
struct structer1 //struct is data tyep and structer1 is the name of the structer
{
    char person_name[100];
    int person_number;
};
int main()
{
    struct structure1 p; // here we are telling int main p is a structer data type with predefined members above under name of structure1
    printf("\nENTER THE PERSON NAME:");
    gets(p.person_name); //here for accesing menber you can use . or -> (structure pointer)
    printf("\nENTER THE NUMBER OF %s :",p.person_name);
    scanf("%d",&p.person_number);
    printf("\nTHE NAME %s AND THE NUMBER %d",p.person_name,p.person_number);
}
