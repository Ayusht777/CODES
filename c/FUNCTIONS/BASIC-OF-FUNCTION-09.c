//isdigit()
// check wheather a char is digit (number)
#include<stdio.h>
#include<ctype.h>
int main()
{
  char x;
  x = '1';
  if(isdigit(x))
     printf("\nIT IS A DIGIT ");
    else
     printf("\nIT IS NOT A DIGIT ");
     x ='a';
    if(isdigit(x))
     printf("\nIT IS A DIGIT ");
    else
     printf("\nIT IS NOT A DIGIT ");


}