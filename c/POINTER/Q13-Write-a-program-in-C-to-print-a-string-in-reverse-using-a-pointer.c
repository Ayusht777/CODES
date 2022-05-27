//Q13-Write-a-program-in-C-to-print-a-string-in-reverse-using-a-pointer.c
/*
Test Data :
Input a string : w3resource
Expected Output :

 Pointer : Print a string in reverse order :                                                                  
------------------------------------------------                                                              
 Input a string : w3resource                                                                                  
 Reverse of the string is : ecruoser3w 

*/
#include<stdio.h>
int main()
{
  char x[100];
  printf("Input a string : ");
  gets(x);
  int l =0;
  char *y =x;
  while(*y!='\0')
  {
     ++l;
     ++y;
  }
  y =x;
  printf("\nReverse string = ");
  for (int i = l; i >= 0; --i) {
        printf("%c", *(y+l));
        y--;
    }



}