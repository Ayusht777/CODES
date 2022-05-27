//isspace()
//The isspace() function checks whether a character is a white-space character or not.
/*
List of all white-space characters in C programming are:
' '	space,'\n' newline,'\t' horizontal tab,'\v' vertical tab,'\f' form feed	,'\r' Carraige return
*/
#include<stdio.h>
#include<ctype.h>
int main()
{
  char x;
  x = ' ';
  if(isspace(x))
     printf("\nIT IS A SPACE CHAR ");
    else
     printf("\nIT IS NOT A SPACE CHAR ");
     x ='a';
   if(isspace(x))
     printf("\nIT IS A SPACE CHAR ");
    else
     printf("\nIT IS NOT A SPACE CHAR ");
     x='\n';
    if(isspace(x))
     printf("\nIT IS A SPACE CHAR ");
    else
     printf("\nIT IS NOT A SPACE CHAR ");
}