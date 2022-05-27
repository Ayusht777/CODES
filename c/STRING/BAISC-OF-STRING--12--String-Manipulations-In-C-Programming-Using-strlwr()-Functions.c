//String Manipulations In C Programming Using strlwr() Functions
#include<stdio.h>
#include<string.h>
void main()
{
         char x[50];
         printf("PROGRAM TO LOWER THE INPUT LETTERS");
         printf("\nENTER THE WORD:");
         fgets(x,sizeof(x),stdin);
         printf("\nTHE ORIGNAL CASE SENSITIVE WORD %s",x);
         printf("\nTHE LOWER STRING:");
         puts(strlwr(x));// function inside a function
}
