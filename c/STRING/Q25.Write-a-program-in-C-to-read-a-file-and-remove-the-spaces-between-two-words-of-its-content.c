//Q25 Write a program in C to read a file and remove the spaces between two words of its content.
#include<stdio.h>
#include<string.h>
void main()
{
         char x[100];
         printf("program to read a file and remove the spaces between two words of its content");
         printf("\nENTER THE STRING:");
         fgets(x,sizeof x,stdin);
         int i=0,j=0;
         while(x[i]!='\0')
         {
                  if(x[i]!=' ')
                  {
                           x[j]=x[i];
                            j++;
                  }
                  i++;


         }
         printf("\nTHE NEW STRING:%s",x);
}

