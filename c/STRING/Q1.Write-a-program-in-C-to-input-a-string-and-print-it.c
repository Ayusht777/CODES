//Q1.Write a program in C to input a string and print it
#include<string.h>
#include<stdio.h>
void main()
{
         char x[50];
         printf("ENTER ANY STRING:");
         fgets(x,sizeof(x),stdin);
         printf("\nTHE INPUTED STRING:%s",x);
}
