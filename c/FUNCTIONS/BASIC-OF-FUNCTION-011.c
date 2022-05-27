//islower()
//The islower() function checks whether a character is lowercase alphabet (a-z) or not.
#include<stdio.h>
#include<ctype.h>
int main()
{
  char x;
  x = 'a';
  if(islower(x))
     printf("\nIT IS A LOWER CHAR ");
    else
     printf("\nIT IS NOT A LOWER CHAR ");
     x ='A';
    if(islower(x))
     printf("\nIT IS A LOWER CHAR ");
    else
     printf("\nIT IS NOT A LOWER CHAR ");
     x=' ';
     if(islower(x))
     printf("\nIT IS A LOWER CHAR ");
    else
     printf("\nIT IS NOT A LOWER CHAR ");


}