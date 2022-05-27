//String Manipulations In C Programming Using strlen() Functions
// syntax : strlen(name of array)
//the strlen() function calculates the length of a given string.
#include<stdio.h>
#include<string.h>
void main()
{
         char x[50];
         printf("PROGRAM TO FIND LENGTH OF AN WORD ");
         printf("\nENTER ANY WORD:");
         fgets(x,sizeof(x),stdin);

         printf("\n the string ");
         puts(x);
         printf(" is size of %d",strlen(x));


}

