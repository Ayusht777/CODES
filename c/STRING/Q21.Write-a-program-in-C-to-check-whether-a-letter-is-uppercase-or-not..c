//Q21 Write a program in C to check whether a letter is uppercase or not.
#include<stdio.h>
#include<ctype.h>//isupper function
void main()
{
         char x;
         printf("program to check whether a letter is uppercase or not");
         printf("\nENTER THE LETTER:");
         scanf("%c",&x);
         if (isupper(x))
         {
                  printf("\nTHE LETTER IS A UPPERCASE");

         }
         else
               printf("\nTHE LETTER IS NOT A UPPERCASE");
}
