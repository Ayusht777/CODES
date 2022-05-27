//Q4.Write a program in C to print individual characters of string in reverse order.
#include<stdio.h>
#include<string.h>
void main()
{
         char x[100];
         printf("program to print individual characters of string in reverse order");
         printf("\nENTER THE STRING:");
         fgets(x,sizeof x,stdin);
         int i,j=0;
         for(i=0;x[i]!='\0';i++)
         {
             j++;
         }
         for(i=j;i>=0;i--)
         {
                  printf("%2c",x[i]);
         }
}
