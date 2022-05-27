//Q3.Write a program in C to separate the individual characters from a string.
#include<stdio.h>
#include<string.h>
void main()
{
         char x[100];
         printf("program to separate the individual characters from a string");
         printf("\nENTER THE STRING:");
         fgets(x,sizeof x,stdin);
         int i;
         for(i=0;x[i]!='\0';i++)
         {
              printf("%2c",x[i]);
         }
}
