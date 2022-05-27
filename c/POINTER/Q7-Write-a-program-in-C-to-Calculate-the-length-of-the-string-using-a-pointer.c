//Q7-Write-a-program-in-C-to-Calculate-the-length-of-the-string-using-a-pointer
/*
Test Data :
Input a string : w3resource
Expected Output :

The length of the given string w3resource                                                                    
is : 10    

*/
#include<stdio.h>
int main()
{
  char x[100];
  printf("ENTER A STRING:");
  gets(x);
  char *y=x;
  char *q = x;
  int z =0;
  for(;*y!='\0';y++)
  {
     z++;

  }
  
  printf("\nTHE STRING IS : ");
 for(;*q!='\0';q++)
  {
     printf("%c",*q);

  }
  printf("\nTHE LENGTH OF STRING IS %d",z);


}