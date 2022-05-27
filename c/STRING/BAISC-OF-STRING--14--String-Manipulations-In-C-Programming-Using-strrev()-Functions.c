//String Manipulations In C Programming Using strrev () Functions
// strrev(array name)
// it is use to revese a string by each char or letter by letter
#include<stdio.h>
#include<string.h>
void main()
{
         char x[50];
         printf("PROGRAM TO REVERSE A STRING");
         printf("\nENTER ANY WORD:");
         fgets(x,sizeof(x),stdin);
         printf("\nTHE ORIGNAL STRING IS %s",x);
         printf("\nTHE REVERSE STRING ");
         puts(strrev(x));



}
