//Q20 Write a program in C to check whether a character is Hexadecimal Digit or not.
#include<stdio.h>
#include<string.h>
#include<ctype.h> //it have isxdigit
void main()
{
         char x;
         printf("program to check whether a character is Hexadecimal Digit or not");
         printf("\nINPUT A CHARCATER:");
         scanf("%c",&x);
         if(isxdigit(x))
         {
                  printf("\nTHE CHARACTER IS A HEXADECIMAL DIGIT");

         }
         else
                  printf("\nTHE CHARACTER IS NOT A HEXADECIMAL DIGIT");
}
