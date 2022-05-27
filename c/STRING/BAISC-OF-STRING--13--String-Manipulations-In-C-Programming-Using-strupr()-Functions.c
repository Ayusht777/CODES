//String Manipulations In C Programming Using strupr() Functions
#include<stdio.h>
#include<string.h>
void main()
{
         char x[50];
         printf("PROGRAM TO UPPER THE INPUT LETTERS");
         printf("\nENTER THE WORD:");
         fgets(x,sizeof(x),stdin);
         printf("\nTHE ORIGNAL CASE SENSITIVE WORD:%s",x);
         printf("\nTHE UPPER STRING:");
         puts(strupr(x));// function inside a function
}
