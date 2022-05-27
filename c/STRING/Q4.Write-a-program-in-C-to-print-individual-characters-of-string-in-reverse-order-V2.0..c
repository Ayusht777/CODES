//Q4.Write a program in C to print individual characters of string in reverse order V2.0.
#include<stdio.h>
#include<string.h>
void main()
{
         char x[100];
         printf("program to print individual characters of string in reverse order");
         printf("\nENTER THE STRING:");
         fgets(x,sizeof x,stdin);
           int i,j;
         j =strlen(x);


         for(i=j;i>=0;i--)
         {
                  printf("%2c",x[i]);
         }
}
