//Q23 Write a program in C to count the number of punctuation characters exists in a string
#include<stdio.h>
#include<string.h>
void main()
{
         char x[100];
         printf("program to count the number of punctuation characters exists in a string");
         printf("\nENTER THE STRING:");
         fgets(x,sizeof x,stdin);
         int i=0,counter=0;
         while(x[i]!='\0')
         {
                  if(x[i]==',')
                  {
                      counter++;
                  }
                  i++;
         }
         printf("\nTHE TOTAL NUMBER OF PUNCTUATION CHARACTERS ARE :%d",counter);

         }
