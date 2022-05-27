//Q26 Write a program in C to check whether a character is digit or not.
#include<stdio.h>

#include<ctype.h> //isdigit function
void main()
{
         char x;
         printf("program to check whether a character is digit or not");
         printf("\nENTER THE CHARACTER:");
         scanf("%c",&x);
         if(isdigit(x))
         {
              printf("\nTHE CHARACTER IS A DIGIT");
         }
         else
                  printf("\nTHE CHARACTER IS NOT A DIGIT");
}
