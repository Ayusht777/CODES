//isxdigit()
//The isxdigit() function checks whether a character is a hexadecimal digit character (0-9, a-f, A-F) or not.
#include<stdio.h>
#include<ctype.h>
int main()
{
  char x;
  x = 'A';
  if(isxdigit(x))
     printf("\nIT IS A xdigit CHAR ");
    else
     printf("\nIT IS NOT A xdigit CHAR ");
     x ='a';
    if(isxdigit(x))
     printf("\nIT IS A xdigit CHAR ");
    else
     printf("\nIT IS NOT A xdigit CHAR ");
     x=' ';
     if(isxdigit(x))
     printf("\nIT IS A xdigit CHAR ");
    else
     printf("\nIT IS NOT A xdigit CHAR ");


}