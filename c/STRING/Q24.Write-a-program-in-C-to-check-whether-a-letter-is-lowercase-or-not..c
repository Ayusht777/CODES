//Q24 Write a program in C to check whether a letter is lowercase or not.
#include<stdio.h>
#include<ctype.h>//islower function
void main()
{
         char x;
         printf("program to check whether a letter is uppercase or not");
         printf("\nENTER THE LETTER:");
         scanf("%c",&x);
         if (islower(x))
         {
                  printf("\nTHE LETTER IS A LOWERCAE");

         }
         else
               printf("\nTHE LETTER IS NOT A LOWERCASE");
}
